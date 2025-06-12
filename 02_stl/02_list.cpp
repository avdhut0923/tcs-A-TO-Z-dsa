#include <bits/stdc++.h>
using namespace std;

int main(){
    list <int>ls;
    ls.push_back(2);
    ls.emplace_back(5);
    ls.push_front(33);
    ls.emplace_front(23);

    for (auto it:ls){
        cout<<it<<" ";
    }

    // rest functions are same as vector 
    // begin , end ,rbegin , rend , clear, insert , size , swap 
}