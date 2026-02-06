#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
}
int main() {
    int n=10;
    int arr[n]={1,2,9,10,103,16,100,18,19,11};
    bubble_sort(arr,n);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    
}

