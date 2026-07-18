#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr==er && sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    int rightWays = maze(sr+1,sc,er,ec);
    int downWays = maze(sr,sc+1,er,ec);
    return rightWays + downWays;
}
// we can aslo solve this using only 2 variables.
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 || col==1) return 1;
    int rightWays = maze2(row,col-1); //right
    int downWays = maze2(row-1,col); //down
    return rightWays + downWays;
}
void printPath(int sr,int sc,int er,int ec,string s){
    if(sr==er && sc==ec){  //destination reached
        cout<<s<<endl;
        return;
    }
    if(sr>er || sc>ec) return;
    printPath(sr+1,sc,er,ec,s+'D');  //down
    printPath(sr,sc+1,er,ec,s+'R');  //right
}
// prnt using 2 variables
void printPath2(int row,int col,string s){
    if(row==1 && col==1){  //destination reached
        cout<<s<<endl;
        return;
    }
    if(row<1 || col<1) return;
    printPath2(row-1,col,s+'D');  //down
    printPath2(row,col-1,s+'R');  //right
}
int main(){
    cout<<maze(1,1,3,3)<<endl;
    printPath(1,1,3,3,"");
    cout << maze2(3,3)<<endl;
    printPath2(3,3,"");
}