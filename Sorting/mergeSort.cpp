// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>&arr,int st,int mid,int end){ //o(n)
//     vector<int>temp;
//     int i=st,j=mid+1;
//     while(i<=mid && j<=end){
//         if(arr[i]<=arr[j]){ //for decending order do  here >=
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j<=end){
//         temp.push_back(arr[j]);
//         j++;
//     }
//     for(int idx=0;idx<temp.size();idx++){
//         arr[idx+st]=temp[idx];
//     }
// }

// void mergeSort(vector<int>&arr,int st,int end){
//     if(st<end){
//     int mid =st+(end-st)/2;
//     mergeSort(arr,st,mid);//left half
//     mergeSort(arr,mid+1,end);//right half

//     merge(arr,st,mid,end);
//     }
// }

// int main(){
//     vector<int>arr={12,31,35,8,32,17};
//     mergeSort(arr,0,arr.size()-1);

//     for(int val:arr){
//         cout<<val<<" ";
//     }
//   cout<<endl;
//       return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int r=0;
int c=0;
void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st, j=mid+1;
    while(i<=mid && j<=end){
        c++;
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //left
    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    //right
     while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }

    

}
void mergeSort(vector<int>&arr,int st,int end){
    r++;
    if(st<end){
        int mid=st+(end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}
int main (){
    vector<int>arr={12, 34 ,56, 24, 15};
    mergeSort(arr,0,arr.size()-1);
      for(int val:arr){
        cout<<val<<" ";
    }
  cout<<endl;
  cout<<r<<endl;
  cout<<c<<endl;

      return 0;
}
