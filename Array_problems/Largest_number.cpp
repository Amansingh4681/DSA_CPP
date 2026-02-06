#include <bits/stdc++.h>
using namespace std;
int largest_number(int arr[],int size){
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int size=6;
    int arr[size]={4,6,3,7,2,0};
    cout<<largest_number(arr,size)<<" ";
}