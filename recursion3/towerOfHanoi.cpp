#include<iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1, a, c, b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1, b, a, c);
}
int main (){
    int n = 4;
    hanoi(n, 'A', 'B', 'C');
}

//pbjective: To print the steps to solve the Tower of Hanoi problem for n disks. The function hanoi recursively moves disks from source peg 'a' to destination peg 'b' using auxiliary peg 'c'.
// logic: The base case is when there are no disks to move (n==0). In that case, the function returns without doing anything. Otherwise, the function first moves n-1 disks from peg 'a' to peg 'c' using peg 'b' as auxiliary. Then it prints the move of the nth disk from peg 'a' to peg 'b'. Finally, it moves the n-1 disks from peg 'c' to peg 'b' using peg 'a' as auxiliary. This process continues recursively until all disks are moved to the destination peg.