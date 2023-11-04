
#include<bits/stdc++.h>
using namespace std;

//unorderd set imp : isme ye check krna h k set m koi value present h ya nhi only presense ko check krna h
//unorderes _ set<pair<int,int>>s; [isme pair nhi likh skte]
// unordered_set<set<int,int>>s;   [unorderd me set nhi likh skte]
//kuki # function library m define nhi h


void print(unordered_set<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 

}


int main()
{
  unordered_set<string>s;

  s.insert("abc");            //o(1))
                              // isme s.insert se value dali h
  s.insert("zsdf");
  s.insert("bcd");

 s.insert("abc");            //isme map ki tarh unique element store krta h


 s.find("abc");              //ye us element ka iterator return karega  or s.find se likhege

print(s);                

cout<<endl;
 auto it= s.find("abc");     //0(1)   //isme auto ki jagah int iterator ki tarah bhi likh skte h
                                // isme  agr abc likh rha hu to ye abc =not print?
                               //  isme agr abcd likh rha hu to ye abcd =only abc print ho rha h


 if(it!= s.end())               //ye cheque lga dege
 {
    s.erase(it);    
 }
 print(s);     


}



