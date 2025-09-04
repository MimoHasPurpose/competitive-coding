#include<bits/stdc++.h>
using namespace std;
void relu(int);
int main()
{
    // implementing relu
    int x;
    cin>>x;
    relu(x);

    // softmax fun(): 
}

void relu( int x){
    cout <<(x>0?x:0)<<endl;
}