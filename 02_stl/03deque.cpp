#include <bits/stdc++.h>
using namespace std;

void print(deque <int> dq){
    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    deque <int> dq;
    dq.push_back(1);
    print(dq);
    

    dq.emplace_back(2);
        print(dq);

    dq.push_front(3);
        print(dq);

    dq.emplace_front(4);
        print(dq);


    dq.pop_back();
        print(dq);

    dq.pop_front();
        print(dq);
     

    

    // rest functions are same as vector 
    // begin , end ,rbegin , rend , clear, insert , size , swap 
}