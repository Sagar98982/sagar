
#include<bits/stdc++.h>
using namespace std;

//1.inbuilt implimentation
//2.time complexity
//3.valid keys datatype
//4.map or unorder map m sare function same hote h




void print(unordered_map<int,string>&m)
{

    //cout<<m.size() << endl;
                                       //  [insertion o(log(n))]h or pair ki value nikalne ki b o(log(n))h
    for(auto &pr :m)
    {

        cout<<pr.first <<" "<<pr.second <<endl;    

    }

}


int main()
{

unordered_map<int,string>m;            


m[1] = "abc";                //o(log(1)) ho jyega unorderd map m
m[5] = "cdc";
m[3] = "acd";           //unorderd map p randam order m print hogi ex: 4351



m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega


print(m);

cout<<"\n";

auto it = m.find(3);    //o (log(1) )         // is find function m 3 ki value find krni h to m.find(3) function 
 //auto it1   =    m.end() ;                     
     cout<<(*it).first<<(*it).second;                             //   use hoga or ye iterator return karega ex: 3 ki value ka iterator

                                    //  return karega
cout<<"\n";
if(it!=m.end())                  // ye ek safety cheque h m.erase karne se phle  lga do ??
{
m.erase(3);                      //isme 3 delete ho jayega


m.erase(it);                   //2nd method // isme itrator ki value bhi de skte h ex: (it)= to m.find(5)m 5 vlue 

  }                              //  delete ho jayegi


 //m.clear();                    //m.clear() ye function pure map ko clear kr dega is function se only 
         
                             // 0 print karega


print(m);


}




//valid keys datatype uses:

/*void print(unordered_map<int ,string>&m)
{

    cout<<m.size() << endl;
                                       //  [insertion o(log(n))]h or pair ki value nikalne ki b o(log(n))h
    for(auto &pr : m)
    {

        cout<<pr.first <<" "<<pr.second <<endl;    

    }

}


int main()
{

unordered_map<pair<int,int>,string>m;  //[isme pair data TYPE KO Unordered map m use nhi kr skte  ] 

map<pair<int,int>,string>m;            // [isme pair data type ko order map m use kr skte h]

}*/