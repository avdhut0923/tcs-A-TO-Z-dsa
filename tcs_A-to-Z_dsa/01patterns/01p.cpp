
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main() {
    // Write C++ code here
    int n;
    cout<<"enter no. of rows "<<endl;
    cin>>n;
    printPattern(n);

    return 0;
}