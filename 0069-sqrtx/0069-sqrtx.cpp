class Solution {
public:
    int mySqrt(int x) {
        
        int low =0;
      int high = x;
      int ans=0;

      if(x==0 || x==1) return x;

    while(low <= high){
        long long mid = low + (high - low)/2;

        if(mid*mid <= x && mid != 0){
            ans =mid;
            low = mid +1;
        }
        else high = mid -1;
    }

    return ans;
    }
};