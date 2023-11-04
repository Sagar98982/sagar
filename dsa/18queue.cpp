#include<bits/stdc++.h>
using namespace std;


int main()
{
queue<string> q;

q.push("abc");
q.push("bcd");
q.push("cde");
q.push("def");
q.push("ghi");

while(!q.empty())

{

 cout<<q.front()<<endl;          //isme q.front se value milegi
  q.pop();                       // pop se value bahar nikal jayegi

                                    // isme abc
                                    //      bcd
}                                   //      cde       print hoga
                                    //      def
                                    //      ghi
                






}