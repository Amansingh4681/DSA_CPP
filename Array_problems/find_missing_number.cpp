#include <bits/stdc++.h>
using namespace std;
int missing_number(int arr[], int n){
    int x1 = 0, x2 = 0;

    for(int i = 0; i < n; i++)
        x1 ^= arr[i];

    for(int i = 1; i <= n + 1; i++)
        x2 ^= i;

    return x1 ^ x2;
}



int main(){
    int arr[]={1,2,3,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<missing_number(arr,size);
    
    
}