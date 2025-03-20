#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr=lower_bound(a,a+n,5);
    cout<<"lower_bound "<<(*ptr)<<endl;
    int *ptr2=upper_bound(a,a+n,5);
    cout<<"upper_bound "<<(*ptr2)<<endl;
}
