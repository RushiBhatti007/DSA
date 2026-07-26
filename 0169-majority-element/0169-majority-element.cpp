class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int maxi;
        unordered_map<int,int> mpp;
        int cnt=0 , n=nums.size();
        int ele=0;

        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            maxi=max(it.second , cnt);
            if(it.second > n/2)  return ele=it.first;
        }
        return -1;
    }
};