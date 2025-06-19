#include <bits/stdc++.h>
using namespace std;

void rec(int n){
    cout<<"Ram"<<endl;
    if(n==0) return;
    // n--;
    return  rec(n-1);
}

int main(){
    int n= 10;
    rec(n);
}