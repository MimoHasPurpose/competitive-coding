// will implement function of p&c-discrete mathematics:
#include<bits/stdc++.h>

using namespace std;
float fact(float );
int main()
{
    float n,r;
    cin>>n>>r;
    // below 2 lines calculates fact of n,r
    float factofn=fact(n);
    float factofr=fact(r);
    float ncr;
    float npr;
    // below 2 lines calculate ncr, npr
    ncr=fact(n)/(fact(r)*fact(n-r));
    npr=fact(n)/fact(n-r);
    // check if nc1+nc2+.... ncn=2^n


    // derangement Dn


    // verify p&c properties.
    
    
    return 0;
}
float fact(float input)
{
    float output=1;
    for(float i=1;i<=input;i++){
        output=output*i;
    }
    return output;
}
