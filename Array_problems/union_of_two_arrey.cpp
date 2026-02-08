#include <bits/stdc++.h>
using namespace std;
void union_array(int arr1[],int arr2[],int size1,int size2){
    int i=0;
    int j=0;
    while(i<size1&&j<size2){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }else{
                cout<<arr2[j]<<" ";
                j++;
            }
        }
    }
    while(i<size1){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<size2){
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main(){
    int arr1[]={2,4,6,7,8,9};
    int arr2[]={3,4,6,8,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    union_array(arr1,arr2,size1,size2);
    
}