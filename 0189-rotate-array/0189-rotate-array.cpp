class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        nums.insert(nums.end(),nums.begin(),nums.end());

        vector<int> sub(nums.begin()+(n-k) , nums.begin()+(2*n-k));
        nums=sub;
    }
};