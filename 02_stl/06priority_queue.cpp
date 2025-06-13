#include <bits/stdc++.h>
using namespace std;



int main(){
//   priority_queue<int>pq;  // also called max heap // largest element at top 
//   pq.push(5);
//   pq.push(2);
//   pq.push(1);
//   pq.push(8);
//   pq.emplace(10); // {10,8,5,2,1};
//   cout<<pq.top();// 10
//   pq.pop();// {8,5,2,1};
//   cout<<pq.top();// 8


priority_queue<int , vector<int>, greater<int >>pq;  // also called min heap // smallest element at top 
  pq.push(5);
  pq.push(2);
  pq.push(1);
  pq.push(8);
  pq.emplace(10); // {1,2,5,8,10};
  cout<<pq.top();// 1
  pq.pop();// {2,5,8,10};
  cout<<pq.top();// 2
  
}