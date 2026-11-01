class Solution {
public:
     long long res = 0;
     long long revNum(long long num){
        if(num == 0){ 
            return res;
            }
        res = res*10+num%10;
        num = num/10;
        
        revNum(num);
        return res;
     };

    int reverse(int x) {
        res = 0;

        long long num = x;

        if (num < 0) {
            num = -num;
        }

        long long ans = revNum(num);

        if (x < 0) {
            ans = -ans;
        }
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return (int)ans;
    }
};