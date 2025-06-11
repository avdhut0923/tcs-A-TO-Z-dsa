#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=1;i<=n;i++){
     
  //upper half
//   stars,spaces , stars
   for(int j=1;j<=n-i+1;j++){
    cout<<"*";
   }
   for(int j=1;j<=2*i-2;j++){
    cout<<" ";
   }
   for(int j=1;j<=n-i+1;j++){
    cout<<"*";
   }   
   cout<<endl;

  }
  for(int i=1;i<=n;i++){
    //    lower half

   for(int j=1;j<=i;j++){
    cout<<"*";
   }
   for(int j=1;j<=2*(n-i);j++)
   cout<<" ";
   for(int j=1;j<=i;j++){
    cout<<"*";
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