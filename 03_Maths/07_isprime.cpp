//https://www.geeksforgeeks.org/problems/prime-number2314/1

class Solution {
  public:
    bool isPrime(int n) {
        // code here
       if(n!=2 && n%2==0 )return false;
       if(n!=3 && n%3==0)return false;
       for(int i= 5;i<sqrt(n);i++){
           if(n%i==0)return false;
       }
       return true;
    }
};