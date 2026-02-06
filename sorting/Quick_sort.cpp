#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st ,int end){
    int idx=st-1,pivot=arr[end];
    for(int i=st;i<end;i++){
        if(arr[i]<=pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quick_sort(vector<int> &arr,int st , int end ){
    if(st<end){
        int pi=partition(arr,st,end);
        quick_sort(arr,st,pi-1);
        quick_sort(arr,pi+1,end);
    }
}
int main() {
	vector<int>arr={4,3,5,7,8,3,89,32,12,24,68,98,90};
	quick_sort(arr,0,arr.size()-1);
	for(int x : arr){
	    cout<<x<<" ";
	}

}
