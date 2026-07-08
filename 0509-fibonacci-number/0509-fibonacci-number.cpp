class Solution {
public:
    int fib(int n) {
        
        if(n<=1) return n;

        int last=1 , slast=0 , crunt=0;

        for(int i=2 ; i<=n ; i++){
            crunt=last+slast;
            slast=last;
            last=crunt;
        }

        return crunt;
    }
};