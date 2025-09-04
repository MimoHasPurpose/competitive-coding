#include<bits/stdc++.h>
using namespace std;
// #task: add a number 4 end of string
void stringify(string s, int a){
    string num=to_string(a);
    string s2=s+num;

    cout<<s2<<endl;
    
}

// # task: print string char one by one using for (a:y)
void print(string s){
    for(char a:s){
        cout<<a<<" ";
    }
}
// #task: uppercase first character
string uppercase(string &s1){
    transform(s1.begin(),s1.begin()+1,s1.begin(),::toupper);
    // cout<<s1<<endl;
    return s1;
}
// # task: add 2 strings
void addstrings(string s1,string s2){
    string su1=uppercase(s1);
    string su2=uppercase(s2);
    cout<<s1.append(s2)<<endl;
}

// #task: show digits in a string
void digits(string s){
    int a=0;
    a=s[0]-'0';
    cout<<a<<endl;
    for( char c:s){
        // cout<<c-'0'<<endl;
    }
}
// #task: reverse chars in string
string reverseS(string a){
    string result="";
    for(int i=a.size()-1;i>=0;i--){
        result.push_back(a[i]);
    }
    return result;

}
//task:extracting numbers from string
int string_to_number(string s1){
    string output=reverseS(s1);
    int number=0;
    for(int i=0;i<output.size();i++){
        number=number+(output[i]-'0')*int(pow(10,i));
        cout<<number<<" "<<output[i]-'0'<<" "<<int(pow(10,i))<<" "<<endl;
    }
    return number;
}
int main()
{
    string s1;
    cin>>s1;
    int num=string_to_number(s1);
    cout<<endl;
    cout<<endl;
    cout<<num;
    // cout<<output<<endl;
   
    // cout<<number<<endl;
    // cout<<s1;
    // digits(s1);
    // string s2;
    // cin>>s2;
    // stringify(s,4);
    // print(s);
    // addstrings(s1,s2);
    return 0;
}
