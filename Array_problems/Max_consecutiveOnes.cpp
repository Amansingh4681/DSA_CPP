class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&arr) {
        int count=0;
        int maxcount=0;
        for(auto val:arr){
            if(val==1){
                count++;
                maxcount=max(maxcount,count);
            }else{
                count=0;
            }
        }
        return maxcount;
        
    }
};