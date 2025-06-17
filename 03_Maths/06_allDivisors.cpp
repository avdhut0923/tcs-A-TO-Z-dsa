 // https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

 // 
 class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        set <int > s;
        s.insert(1);
        s.insert(n);
        for(int i = 2;i<=sqrt(n);i++){
            if(n%i==0){
                s.insert(i);
                s.insert(n/i);
            }
        }
        for(auto it : s){
            cout<<it<<" ";
        }
    }
};

//use of stack solution is also make scence 



// void printAllDivisors(int num){

//     stack<int> st;

//     for(int i = 1; i*i<=num; i++){

//         if(num%i==0){

//             cout<<i<<endl;

//             st.push(num/i);

//         }

//     }

//     while(st.size()!=0){

//         cout<<st.top()<<endl;

//         st.pop();

//     }

// }