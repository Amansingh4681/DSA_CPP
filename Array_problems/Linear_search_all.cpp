#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int n,int target){
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i<<" ";
            found=true;
        }
    }        
    if(!found){
        cout<<"-1";
    }   
}
    
    
int main(){
    int arr[]={2,4,7,6,8,7};
    int target=7;
    int num=sizeof(arr)/sizeof(arr[0]);
    linear_search(arr,num,target);
}