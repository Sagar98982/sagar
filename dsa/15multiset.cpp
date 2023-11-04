
#include<bits/stdc++.h>
using namespace std;

//imp : multiset k case me agr s.insert(abc) h 2 bar = to 2 bar print karega

/*void print(multiset<string>&s)
{
 for(string value :s)
 {                                              //ye first metod range loop se likh skte h
    cout<< value << endl;                           
 }
 

}


int main()
{
  multiset<string>s;

  s.insert("abc");            //o(log(n)))  kuki ye red black trees ka use krte h
                              // isme s.insert se value dali h
  s.insert("zsdf");
  s.insert("bcd");

 s.insert("abc");            //isme map ki tarh unique element store krta h


 s.find("abc");              //ye us element ka iterator return karega  or s.find se likhege


  print(s);


}*/



//find function uses:


//imp: find() operation 1st value ka iterator return karega

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

  s.insert("abc");            //o(log(n)))  kuki ye red black trees ka use krte h
                              // isme s.insert se value dali h
  s.insert("zsdf");
  s.insert("bcd");

 s.insert("abc");            //isme map ki tarh unique element store krta h

print(s);
 auto it=s.find("abc");     
 cout<<*(it);       //ye us element ka iterator return karega  or s.find se likhege


//  auto it= s.find("bcde");     //0(1)   isme ager 2 abc h to= 1st abc vala iterator return karega  = agr
//                                       //  is case m duplicate presense h 
//                                 //isme auto ki jagah int iterator ki tarah bhi likh skte h
//                                  //isme  agr abc likh rha hu to ye abc =not print?
//                                  //isme agr abcd likh rha hu to ye abcd =only abc print ho rha h


if(it!= s.end())               //ye cheque lga dege
 {
    s.erase(it); 
    s.erase("abc");                     // s.erase(it ) me iterator(it) or value  dono pass kr skta hu  }

 }

 print(s);


}









