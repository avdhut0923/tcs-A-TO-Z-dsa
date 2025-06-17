 // https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

 class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int d=0;
        int store = n;
        int sum = 0;
        int len =  to_string(n).length();//alternative (int)log10(n) + 1;

        while(n>0){
            d=n%10;
            sum = sum + pow(d,len);
            n=n/10;
        }
        if(store == sum)return true;
        else return false ;
    }
};