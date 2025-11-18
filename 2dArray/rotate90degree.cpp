#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/columns : ";
    cin>>m;
    
    int arr[m][m];
    for(int i = 0; i<=m-1;i++){
        for(int j = 0 ; j<=m-1;j++){
            cin>>arr[i][j];
        }
    }cout<<"\n";
    //print
    for(int i = 0; i<=m-1;i++){
        for(int j = 0 ; j<=m-1;j++){
          cout<<arr[i][j]<<" ";
           
          }
          cout<<endl;
}
    cout<<endl;
    // 
    
    //transpose in the same matrix
    for(int i = 0 ; i <=m-1;i++){ //rows
        for(int j = i+1;j<=m-1;j++){ //col
            //swapping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // reverse each row
    for(int k = 0;k<m;k++){
        int i = 0 ;
        int j = m-1;
        while(i<=j){
             int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    // printing the transport
    for(int i = 0 ; i<=m-1;i++){
        for(int j = 0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    