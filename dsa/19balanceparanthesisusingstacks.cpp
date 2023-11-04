#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int>symbols = {{'[',-1},{'(',-2},{'{',-3},}

string is balanced(string s)
{

stack<char> st;

for(char bracket : s)          //isme bracket ek closing type ki bracket h
{

    if(symbols[brackets]<0)          //iska mtlb ye opening type ki bracket h

    {
      st.push(bracket);              //isme bracket ek opening type ki bracket h



    }
    else{

if(st.empty())return "NO";

char top = st.top();                      //agr stack khali nhi h to top element bahar nikal lege
st.pop();

if(symbols[top]+symbols[bracket]!=0)      //isme ye check karega k top m bracket opening h ya nhi
{
    return "NO";
}


    }

}
 if(st.empty()) return "YES";
 return "NO";


}


int main()
{
   
int t;
cin>>t;

while(t--)
{
   string s;
   cin>>s;
   cout<< is balanced(s) <<endl;\



}


}