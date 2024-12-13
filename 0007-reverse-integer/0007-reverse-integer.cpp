class Solution {
public:
    int reverse(int x) {
        int reversing = 0;
        while(x!=0){
            int digit = x%10;
            if(reversing>(INT_MAX/10)||reversing<(INT_MIN/10)) return 0;
            reversing = reversing*10+digit;
            x=x/10;
        }
        return reversing;
    }
};