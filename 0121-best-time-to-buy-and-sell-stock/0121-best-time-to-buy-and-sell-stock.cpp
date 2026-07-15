class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=prices[0];
        int maxprofit=INT_MIN;

        for(int i=0 ; i<n ; i++){
            if(min>prices[i]) min=prices[i];
            
            int tprofit=prices[i]-min;

            if(maxprofit<tprofit) maxprofit=tprofit;
    
        }
        return maxprofit;
    }
};