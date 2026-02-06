#include <bits/stdc++.h>
using namespace std;
int smalest_element(int arr[],int size){
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int size=6;
    int arr[size]={4,6,3,7,2,0};
    cout<<smalest_element(arr,size)<<" ";
}