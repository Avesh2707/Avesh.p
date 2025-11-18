#include<iostream>
using namespace std;
int main (){
    // int arr[]={4,2,6,2,7,1};
    // int *ptr = arr; // giving address
    // cout<<ptr<<endl;
    // cout<<ptr[0]<<endl;
    // for(int i = 0;i<=4;i++){
    //   cout<<arr[i]<<" ";  
    // }
    int m,n;
   cin>>m;
   cin>>n;
   for(int i = 0;i<m;i++){
    for (int j = 0; j<n;j++){
      cout<<"*";
    }cout<<endl;
   }

}