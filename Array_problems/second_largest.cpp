#include <bits/stdc++.h>
using namespace std;
int largest_number(int arr[],int size){
    int largest=INT_MIN;
    int second_largest;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            second_largest=largest;//simple logic approch
            largest=arr[i];
        }
    }
    return second_largest;
}
int main(){
    int size=6;
    int arr[size]={4,6,3,7,2,0};
    cout<<largest_number(arr,size)<<" ";
}