class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int maxsofar=nums[n-1];
        ans.push_back(maxsofar);
        for(int i=n-2;i>=0;i--){
            if(nums[i]>maxsofar){
                maxsofar=nums[i];
                ans.push_back(maxsofar);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
