class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int sum=nums[0];
        int crntsum=nums[0];

        for(int i=1 ; i<n ; i++){

            crntsum = max(crntsum + nums[i] , nums[i]);
            sum = max(sum , crntsum);

        }
        
        return sum;
    }
};