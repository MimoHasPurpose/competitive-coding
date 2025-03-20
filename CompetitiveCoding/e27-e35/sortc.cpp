#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a,int b){
    return a>b;
}
int main()
{
    int n;

    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
