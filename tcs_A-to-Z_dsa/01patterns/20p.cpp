#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=1;i<=2*n-1;i++){
    int stars = i;
    if(i>n)stars = 2*(n-i);
    
    // stars 
    for(int j=1;j<=stars;j++)
     cout<<"*";

    // spaces 
    for(int j=1;j<=2*n-2;j++){
        cout<<" ";
    }
    // stars 
    for(int j=1;j<=stars;j++)
     cout<<"*";
   
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
