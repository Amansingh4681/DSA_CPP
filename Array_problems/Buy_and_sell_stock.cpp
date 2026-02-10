class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=0;
        for(auto x:prices){
            minprice=min(minprice,x);
            maxprofit=max(maxprofit,x-minprice);
        }
        return maxprofit;

    }
};
