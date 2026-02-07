#include <bits/stdc++.h>
using namespace std;

void Move_left(int arr[],int n,int st,int end){
    while(st<end){
        if(arr[st]==0){
            if(arr[end]!=0){
                swap(arr[st],arr[end]);
                end--;
            }else{
                end--;
            }
        }else{
        st++;}
    }
}
int main() {
	int n=7;
	int arr[n]={0,9,7,6,0,0,6};
	int st=0;
	int end=n-1;
	Move_left(arr,n,st,end);
	for(int i=0;i<n;i++){
	    cout<<arr[i];
	}

}
