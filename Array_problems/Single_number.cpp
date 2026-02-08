#include <bits/stdc++.h>
using namespace std;


int unique_element(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        x^=arr[i];
    }
    return x;
}
int main() {
	int num=5;
	int arr[num]={1,1,2,2,4};
	cout<<unique_element(arr,num);

}




//leet_code_solution

class Solution {
public:
    int singleNumber(vector<int>&arr) {
        int x=0;
        for(auto val:arr){
            x^=val;
        }
        return x;
    }
};