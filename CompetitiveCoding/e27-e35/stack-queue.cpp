#include<bits/stdc++.h>
using namespace std;

void stacks(){
    stack<int> s;
    s.push(2);
    s.push(23);
    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
}
void queues(){
    queue<string> q;
    q.push("abc");
    q.push("aabc");
    q.push("aaabc");
    q.push("abccc");
    q.push("abbbc");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();

    }
}
int main()
{
    queues();

}

