class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int idx=0;
        for(auto it:mp){
            while(it.second--){
                nums[idx++]=it.first;
            }
        }
    }
};
