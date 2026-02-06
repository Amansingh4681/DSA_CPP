#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int st,int mid , int end){
    vector<int> temp;
    int i=st,j=mid+1;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
        
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
}
void merge_sort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid = st+(end-st)/2;
        merge_sort(arr,st,mid);//left aray
        merge_sort(arr,mid+1,end);//right array 
        merge(arr,st,mid,end);
    }
}
int main() {
    vector<int> arr = {22, 54, 63, 1, 2, 5};

    merge_sort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
