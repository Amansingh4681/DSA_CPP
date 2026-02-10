class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el;
        for(auto x : nums){
            if(count==0){
                count=1;
                el=x;
            }else if(x==el){
                count++;
            }else{
                count--;
            }
        }
        int count1=0;
        for(auto x:nums){
            if(x==el) count1++;
            }
            if(count1>(nums.size())/2){
                return el;
            }
            return -1;
        }
};