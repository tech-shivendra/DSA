class Solution {
public:
int res = 0;
    int divisorSum(int x){
        for(int i = 1;i<x;i++){
            if(x%i==0){
                res+=i;
            }
        }
        return res;
    }
    bool checkPerfectNumber(int num) {
        int divSum = divisorSum(num);
        if(divSum==num){
            return true;
        }
        return false;
    }
};