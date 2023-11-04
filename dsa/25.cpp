#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 
//  for(auto it = s.begin();it!=s.end();++it)         // ye 2nd method se  bhi likh skte h ye optional h

//  {
//     cout<<(*it) <<endl;
//  }

}


int main()
{
  set<string>s;

  s.insert("abc");            
                              
  s.insert("zsdf");
  s.insert("bcd");

  s.insert("abc");            
print(s);

  s.find("abc");              


  auto it= s.find("abc");       


 if(it!= s.end())               
 {
    s.erase("abc");
  }
 print(s);


}

