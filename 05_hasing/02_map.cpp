#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mp;
    int n=5;
    for(int i = 0 ; i<n;i++){
        mp[i]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    cout<<"unordered map"<<endl;

    int arr[] = {3,4,3,2,5,4,3,6,7,8,9,80};
    int len=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>ump;
       for(int i = 0 ; i<len;i++){
        ump[arr[i]]++;
    }
    for(auto it:ump){
        cout<<it.first<<"->"<<it.second<<endl;
    }

}