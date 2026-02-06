#include <bits/stdc++.h>
using namespace std;
int shifting(int arr[],int n,int p){
    if(p>=n) return 0;
    int i=0;
    while(i<n-p){
        arr[i]=arr[i+p];
        i++;
    }
    return n-p;
}
int main (){
    int n=14;
    int p=2;
    int arr[n]={1,2,3,4,5,5,7,9,3,4,5,2,6,7};
    int size=shifting(arr,n,p);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}