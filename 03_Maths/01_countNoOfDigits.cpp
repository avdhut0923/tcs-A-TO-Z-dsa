
//  https://www.geeksforgeeks.org/problems/count-digits-1606889545/1

int countDigits(int n) {
    // code here
    int t =0;
    while(n>0){
        // n=n%10;
        n=n/10;
        t++;
        
    }
    return t;
}