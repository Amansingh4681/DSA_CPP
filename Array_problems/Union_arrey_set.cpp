#include <bits/stdc++.h>
using namespace std;
void union_array(int arr1[],int arr2[],int size1,int size2){
   set<int>s;
   for(int i=0;i<size1;i++){
       s.insert(arr1[i]);
   }
   for(int i=0;i<size2;i++){
       s.insert(arr2[i]);
   }
   for(auto val: s){
       cout<<val<<" ";
   }
}
int main(){
    int arr1[]={2,2,4,6,7,8,9};
    int arr2[]={3,4,4,6,8,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    union_array(arr1,arr2,size1,size2);
    
}