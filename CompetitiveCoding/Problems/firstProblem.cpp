// You are given a string s. The score of a string is defined as the sum of the absolute 
// difference between the ASCII values of adjacent characters.
// Return the score of s.

#include <iostream>
#include<string>
using namespace std;

int scoreOfString(string s)
{
    int array[s.size()];
    char c;
    for(int i=0;i<s.length();i++)
    {
        c=s.at(i);
        array[i]==(int)c;
    
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<array[i]<<" ";
    } 
    return 0;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<"Output is: "<<endl;
    cout<<scoreOfString(s);
    return 0;
}