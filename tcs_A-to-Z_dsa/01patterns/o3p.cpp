#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows";
    cin>>n;
     int num=1;
    for(int i=1;i<=n;i++){
       
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
}