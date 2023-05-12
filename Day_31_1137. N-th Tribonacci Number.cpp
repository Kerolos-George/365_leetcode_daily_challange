class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;

        int tL = 0;
        int sL = 1;
        int fL = 1;

        for(int i=3; i<=n; i++){
            int temp = tL + sL + fL;
            tL = sL;
            sL = fL ;
            fL = temp;
        }
        return fL;
    }
};
