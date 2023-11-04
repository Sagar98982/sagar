#include<bits/stdc++.h>
using namespace std;

void print(multiset<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 

}


int main()
{
  multiset<string>s;

  s.insert("abc");            
                              
  s.insert("zsdf");
  s.insert("bcd");

 s.insert("abc");            


 s.find("abc");              


  print(s);
cout<<endl;
auto it=s.find("abc");  

 cout<<*(it)<<endl;       

if(it!= s.end())              
 {
    s.erase(it); 
    s.erase("abc");                     

 }

 print(s);



}
