#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    char ch='A';
    for(int j=1;j<=2*i-1;j++){
        cout<<ch;
        if(j<(2*i+1)/2) ch++;
        else ch--;
    }
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