#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=0;i<n;i++){
     
   for(char ch='e'-i;ch<='e';ch++){
    cout<<ch<<" ";
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