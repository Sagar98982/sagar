#include<bits/stdc++.h>
using namespace std;


int main()
{

  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  while(!s.empty())                   // [ye stack ko khali karne k lie use hota h s.empty () boolean

{                                           //   return karega]


cout<<s.top()<<endl;                    // isme s.top () se value milegi
s.pop();


} 
}                                          