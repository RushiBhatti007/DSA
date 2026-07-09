class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    int n = nums.size();

        if(n == 0) return;

        k = k % n;

        vector<int> arr1 = nums;
        vector<int> arr2 = nums;

        arr1.erase(arr1.begin(), arr1.end() - k);

        arr2.erase(arr2.end() - k, arr2.end());

        vector<int> arr = arr1;
        arr.insert(arr.end(), arr2.begin(), arr2.end());

        nums = arr;
    }
};