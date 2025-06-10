#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        // for numbers 

        // int num =1;
        // for(int j=1;j<=i;j++){
        //     cout<<num;
        //     num++;
        // }

        
        for(int j=1;j<=i;j++){
           cout<<j;
        }


        // for spaces 
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        // for numbers 
        // int a=i;
        // for(int j=1;j<=i;j++){
        //     cout<<a;
        //     a=a-1;
        // }

       
        for(int j=i;j>=1;j--){
           cout<<j;
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