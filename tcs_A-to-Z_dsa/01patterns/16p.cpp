#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    char alpha='A';
  for(int i=1;i<=n;i++){
     
    for(int j=1;j<=i;j++){
            cout<<alpha<<" ";
           
    }
     alpha++;
    cout<<endl;

  }
}

int main(){
    int numOfTests;
    cout<<"enter number of test cases you want to check"<<endl;
    cin>>numOfTests;
    for(int i=1;i<=numOfTests;i++){
        int n;
        cin>>n;
        pattern(n);
    }
    return 0 ;
}