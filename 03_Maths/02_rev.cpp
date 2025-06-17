// https://www.geeksforgeeks.org/problems/reverse-digit0316/1

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int digit = 0;
        int revNum = 0;
        while(n>0){
            digit = n%10;
            revNum = revNum*10 +digit;
            n = n/10;
            
        }
        return revNum;
    }
};