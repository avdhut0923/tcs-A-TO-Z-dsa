#include <bits/stdc++.h>
using namespace std;

void print(deque <int> dq){
    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    stack <int>st;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(6);
    st.emplace(2);

    cout<<st.top();

    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

    stack <int> st2,st1;
    st2.swap(st);
    st2.top();
    

    
}