#include <bits/stdc++.h>
using namespace std;

void rec(int i , int n){
   if(i>=10) return;
   cout<<"jai shree ram "<<endl;
   rec(i+1,n);
}

int main(){
    int n= 10;
    rec(0,n);
}