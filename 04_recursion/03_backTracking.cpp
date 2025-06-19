#include <bits/stdc++.h>
using namespace std;

void rec(int n){
  if(n==0)return;
  return rec(n-1);
  cout<<n<<"jai hari"<<endl;
}

int main(){
    int n= 10;
    rec(n);
}