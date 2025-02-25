#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
        if(b==0)return a;
        return gcd(b,a%b);
}
int main()
{
    cut<<gcd(12,4)<<endl;

}
// formulae: a*b/gcd=lcm