#include <bits/stdc++.h>
using namespace std;

void pattern(int n ){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
         {cout<<"*";}
            
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
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