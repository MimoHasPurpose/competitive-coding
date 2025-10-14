#include<bits/stdc++.h>
using namespace std;
void aprint(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
        
    }
    cout<<endl;
}
int main()
{
aprint(9);
aprint(~9);
aprint(1<<4);
aprint(~(1<<4));
aprint(9&(~(1<<3)));
aprint(9);
aprint(9^(1<<2));
return 0;

}