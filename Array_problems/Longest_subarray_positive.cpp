#include <bits/stdc++.h>
using namespace std;

int Longest_subarray(vector<int> &arr,int k){
    int sum=arr[0];
    int maxlen=0;
    int top=0;
    int low=0;
    while(top<arr.size()){
        while(sum>k){
            sum-=arr[low];
            low++;
        }
        if(sum==k){
            maxlen=max(maxlen,top-low+1);
        }
        top++;
        if(top<arr.size()){
            sum+=arr[top];
            
        }
    }
    return maxlen;
}

int main() {
	vector<int>arr={2,4,3,1,1,1,5,3,5};
	int k=6;
	cout<<Longest_subarray(arr,k)<<endl;
	cout<<arr.size();
}
