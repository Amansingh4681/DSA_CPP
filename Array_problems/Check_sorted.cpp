#include <bits/stdc++.h>
using namespace std;
void check_sorted(int arr[],int size){
    int i=0;
    bool sort=true;
    while(i<size-1){
        if(arr[i]>arr[i+1]){
            sort=false;
            break;
        }
        i++;
    }
    if(sort){
        cout<<"sorted";
        
    }else{
        cout<<"usorted";
    }
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i<size-1;i++){
        cin>> arr[i];
    }
    
	check_sorted(arr,size);
}
