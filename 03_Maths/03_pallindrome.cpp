//  https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {

        int store = x;
        int d = 0;
        int rev = 0;
        while(x>0){
            d=x%10;
            x= x/10;
            rev = rev*10 + d;

        }
        if(store == rev) return true;
        else return false;
        
    }
};