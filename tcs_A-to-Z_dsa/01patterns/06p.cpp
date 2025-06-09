#include <bits/stdc++.h>
using namespace std;

void pattern(int n ){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++)//for spaces
      cout<<" ";
    for(int k=1;k<=2*i-1;k++)  // stars
      cout<<"*";
    for(int j=1;j<=n-i;j++)//for spaces
      cout<<" ";  

       cout<<endl;  
  }
 
}

int main(){
    int t;
    cin>>t;// t = no. of test cases
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}

// int main(){
//     pattern(5);
// }