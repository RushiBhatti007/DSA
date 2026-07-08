#include<math.h>

class Solution {
public:
    bool isThree(int n) {
        vector <int> li;
        for (int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                li.push_back(i);
                if(n/i!=i){
                    li.push_back(n/i);
                }
            }
        }
       return li.size() ==3;
    }
};