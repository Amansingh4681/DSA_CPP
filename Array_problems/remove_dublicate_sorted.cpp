#include <bits/stdc++.h>
using namespace std;
int remove_d(int arr[],int n){
    if(n==0) return 0;
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j])
        j++;
        arr[j]=arr[i];
    }
    return j+1;
}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int size=remove_d(arr,n);
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
}
}
