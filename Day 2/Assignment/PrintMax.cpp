//You have an empty sequence, and you will be given
//queries. Each query is one of these three types:
//1 x  -Push the element x into the stack.
//2    -Delete the element present at the top of the stack.
//3    -Print the maximum element in the stack.



#include <bits/stdc++.h>
using namespace std;


int main() {
    stack<int> s;
    int n;
    cin>>n;

    int q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> q;
        switch (q)
        {
        case 1:
            cin>>x;
            if(s.empty()){
                s.push(x);
            }else{
                s.push(x > s.top() ? x : s.top());
            }
            break;

        case 2:
            if (!s.empty()) {
                s.pop();
            }
            break;

        case 3:
            cout<< s.top()<<endl;
            break;

        default:
            break;
        }
    }

    return 0;
}
