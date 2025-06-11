#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    
  for(int i=1;i<=n;i++){
     
    // for spaces 
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }

    char ch='A'; // first triangle (lower triangle)
    for(int j=1;j<=i;j++)
    {  cout<<ch;
     ch++;
    }
    

    char cha='A'+i-2; 
    // if(i==1)continue;
    for(int j=1;j<=i-1;j++){
        cout<<cha;
        cha--;
    }

    // no need of last spaces to print 
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