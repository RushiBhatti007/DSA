class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int sum=nums[0];
        int crntsum=nums[0];

        for(int i=1 ; i<n ; i++){

            if(crntsum + nums[i] > nums[i]) crntsum = crntsum + nums[i];

            else crntsum = nums[i];

            if(crntsum > sum) sum =  crntsum;

        }
        return sum;
    }
};