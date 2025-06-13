#include <bits/stdc++.h>
using namespace std;

int main(){
     set<int > st;
     st.insert(1);
     st.insert(2);
     st.insert(3);
     st.insert(4);
     st.insert(5); // 1,2,3,4,5

    //  begin()  end(), size() , empty() , swap() same as above
    
    // 1,2,3,4,5
    auto it = st.find(3);

    auto it = st.find(6);

    st.erase(5);
    auto it = st.find(3);
}