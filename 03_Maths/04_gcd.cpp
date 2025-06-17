 #include <bits/stdc++.h>
 using namespace std;

 int gcd ( int a , int b ){
    while(b!=0){
        int temp = b;
    b = a%b;
    a= temp ;
    }
    return a;
 }

 int main(){
    int a = 20;
    int b = 8 ;
    int ans = gcd(a,b);
    cout<<ans;
 }