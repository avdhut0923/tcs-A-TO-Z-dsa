#include <bits/stdc++.h>
using namespace std;

void pattern(int n ){
    for(int i=1;i<n;i++){
        // int num=1;
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
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