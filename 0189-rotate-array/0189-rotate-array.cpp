class Solution {
public:
    void rotate(vector<int>& nums, int k) {

    int n = nums.size();

        if(n == 0) return;

        k = k % n;
        
        int cnt=0;

        for(int start=0 ; cnt < n ; start++){

            int crnt=start;
            int prevl=nums[start];

            do{
                int next = (crnt + k ) %n;

                int temp=nums[next];
                nums[next]=prevl;
                prevl=temp;

                crnt = next;
                cnt++;
            }while(crnt != start);
        }

    }
};