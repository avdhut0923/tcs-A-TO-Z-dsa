#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
     for (auto it:v){
        cout<<it<<" ";
    }
}

int main(){

    vector<int>v(2,200);
    printVec(v);
    cout<<endl;

    v.insert(v.begin(),300);
    printVec(v);
    cout<<endl;


    v.insert(v.begin()+1,3,230);
    printVec(v);
     cout<<endl;

    cout<<v.size();
     cout<<endl;

    v.pop_back();
     printVec(v);
     cout<<endl;


    cout<<v.empty();
     cout<<endl<< "jai shree ram";
      printVec(v);


    v.clear();
     cout<<endl;
      printVec(v);


    cout<<v.empty();
     cout<<endl;
      printVec(v);



}

