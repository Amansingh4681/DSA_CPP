#include <bits/stdc++.h>
using namespace std;

void Move_left(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    
}
int main() {
	int n=7;
	int arr[n]={0,9,7,6,0,0,6};
	Move_left(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}

}
