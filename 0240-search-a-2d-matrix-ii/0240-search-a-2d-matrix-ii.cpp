class Solution {
public:
bool search(vector<int> & nums , int k){

    int n= nums.size();
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == k) return true;
        else if(k > nums[mid]) low = mid +1;
        else high = mid -1;
    }

    return false;
}

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0 ; i<n ; i++){

            bool flag = search(matrix[i] , target);

            if(flag) return true;
        }

      return false;   
    }
};