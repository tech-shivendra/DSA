class Solution {
public:
   long long rev = 0;
   long long revNum(long long num){
    if(num == 0) return rev;
    rev = rev*10+num%10;
    revNum(num/10);
      return rev;
   }

    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int reversedX = revNum(x);
        if(reversedX == x){
            return true;
        }
        return false;
    }
};