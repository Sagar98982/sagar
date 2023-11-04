#include<bits/stdc++.h>
using namespace std;

//imp: set hamesha sorted order me print karega    ex: 12435 = 12345 
//imp : set m agr 2 bar abc h to = ony 1 bar print  abc hoga




/*void print(set<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 
/* for(auto it = s.begin();it!=s.end();++it)         // ye 2nd method se  bhi likh skte h ye optional h

 {
    cout<<(*it) <<endl;
 }*/

//}


/*int main()
{
  set<string>s;

  s.insert("abc");            //log(n)
                              // isme s.insert se value dali h
  s.insert("zsdf");
  s.insert("bcd");

 // s.insert("abc");            //isme map ki tarh unique element store krta h


 // s.find("abc");              //ye us element ka iterator return karega  or s.find se likhege


//   auto it= s.find("abc");       //isme auto ki jagah int iterator ki tarah bhi likh skte h


//  if(it!= s.end())               //ye cheque lga dege
//  {
//     cout<< (*it);
//  }
 print(s);


}*/




//erase function uses:


void print(set<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 

}


int main()
{
  set<string>s;

  s.insert("abc");            //log(n)
                              // isme s.insert se value dali h
  s.insert("zsdf");
  s.insert("bcd");

 s.insert("abc");            //isme map ki tarh unique element store krta h


 s.find("abc");              //ye us element ka iterator return karega  or s.find se likhege


  auto it= s.find("abcd");       //isme auto ki jagah int iterator ki tarah bhi likh skte h
                                 //isme  agr abc likh rha hu to ye abc =not print?
                                 //isme agr abcd likh rha hu to ye abcd =only abc print ho rha h


 if(it!= s.end())               //ye cheque lga dege
 {
    s.erase(it);
 }
 print(s);


}



