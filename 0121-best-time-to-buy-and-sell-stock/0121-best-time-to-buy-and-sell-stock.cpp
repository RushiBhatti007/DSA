class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprice=INT_MAX;

        int maxprofit=0;
        for(auto it : prices){

            minprice=min(minprice,it);
            maxprofit=max(maxprofit , it-minprice);
        }
        return maxprofit;
    }
};