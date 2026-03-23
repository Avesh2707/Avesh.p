#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
// #include "BSTDeleteAndPreOrder.cpp" 
class BSTNODE{
	public : 
    int data;
    BSTNODE *left, *right;      
};
BSTNODE *root;
class BST {
	public : 
	// BST () {
	// 	root = NULL;
	// }
	BSTNODE* newNode(int ele);
	BSTNODE* insertNode(BSTNODE * root , int ele);
	BSTNODE* deleteNode(BSTNODE * root, int ele);
	void preorder(BSTNODE * root);
};
BSTNODE* BST::newNode(int ele) {
	BSTNODE *temp = new BSTNODE;
	temp->data = ele;
	temp->left = temp->right = NULL;
	return temp;
}

BSTNODE* BST::insertNode(BSTNODE* node, int ele) {
	if(node==NULL){
		cout<<"Successfully inserted.\n";
		return newNode(ele);
	}
	if(ele<node->data){
		node->left=insertNode(node->left,ele);
	}
	else if(ele>node->data){
		node->right= insertNode(node->right,ele);
	}else{
		cout<<"Element already exists in BST.\n";
	}
	return node;
}

void BST::preorder(BSTNODE *root) {
	if(root==NULL){
		return ;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


// Use this function to find the leftmost child of the right sub tree in deleteNode method.
BSTNODE* minValueNode(BSTNODE* node) {
	BSTNODE *current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}

BSTNODE*  BST::deleteNode(BSTNODE* root, int ele) {
	if(root==NULL){
		cout<<"Cannot find "<<ele<<" in the binary search tree.\n";
		return root;
	}
	if(ele<root->data){
		root->left=deleteNode(root->left,ele);
	}
	else if(ele>root->data){
		root->right=deleteNode(root->right,ele);
	}
	else{
		if(root->right==NULL){
			BSTNODE*temp = root->left;
			cout<<"Deleted "<<root->data<<" from the binary search tree.\n";
			delete root;
			return temp;
		}else if(root->left==NULL){
			BSTNODE*temp = root->right;
			cout<<"Deleted "<<root->data<<" from the binary search tree.\n";
			delete root;
			return temp;
		}
	}return root;
}
int main() {
	int x, op;
	BST bst;
	while(1)
	{
		cout << "1.Insert 2.Delete 3.Preorder Traversal 4.Exit\n";
		cout << "Enter your option : ";
		cin >> op;
		switch(op) {
			case 1:	cout << "Enter an element to be inserted : ";
					cin >> x;
					root = bst.insertNode(root,x);
					break;
			case 2:	cout << "Enter an element to be deleted : ";
					cin >> x;
					root = bst.deleteNode(root,x);
					break;
			case 3:
					if(root == NULL) {
						cout << "Binary Search Tree is empty.\n";
					}
					else {
						cout << "Elements of the BST (pre-order traversal): ";
						bst.preorder(root);
						cout << "\n";
					}
					break;
			case 4:	exit(0);
		}
	}
}