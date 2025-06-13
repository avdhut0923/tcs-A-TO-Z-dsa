#include <bits/stdc++.h>
using namespace std;

// void print(queue <int> q){
//     for(auto it : q){
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

int main(){
    queue <int> q;
    q.push(2);
    q.push(4);
    q.emplace(6);
   cout<< q.back();
    q.back() += 3 ;
         cout<<q.back(); 
    cout<<q.front();   

    q.pop();       
    cout<<q.front();
        

    

    // rest functions are same as vector 
    // begin , end ,rbegin , rend , clear, insert , size , swap 
}