#include<bits/stdc++.h>
using namespace std;

/*map m it++ use hoga
map m it+1 use nhi hoga*/



/*int main()
{

map<int,string>m;            // [key ki datatype integer h or value ki datatype string h]


m[1] = "abc";
m[5] = "cdc";
m[3] = "acd";

m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega



map<int,string>:: iterator it;

for(it= m.begin();it!=m.end();++it)
{


    cout<<(*it).first << " "<<(*it).second<<endl;   //[isme sorted order m print karega ex: 1 3 4 5]

}
    
}*/



//auto keyword ka use:

/*int main()
{

 map<int,string>m;            // [key ki datatype integer h or value ki datatype string h]


m[1] = "abc";
m[5] = "cdc";
m[3] = "acd";

m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega

for(auto & pr : m)          // pr ek pair h
{

cout<<pr.first <<pr.second <<endl;

}

}*/



//function k through auto keyword use:

/*void print(map<int,string>&m)
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

 map<int,string>m;            // [key ki datatype integer h or value ki datatype string h]


m[1] = "abc";                //o(log(n))
m[5] = "cdc";
m[3] = "acd";

m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega

auto it = m.find(3);    //o (log(n) )         // is find function m 3 ki value find krni h to m.find(3) function 
                                      
                                   //   use hoga or ye iterator return karega ex: 3 ki value ka iterator

                                    //  return karega


 if(it==m.end())
 {
   cout<<"no value";

 }                                    //  agr 3 ki value map me nhi h  to ye m.end()return karega

else

{

cout<<(*it).first <<" "<< (*it).second<<endl;


}



//print(m);


}*/


//m.erase (3) function uses: map me 3 delete ho jayega is function se




void print(map<int,string>&m)
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

 map<int,string>m;            // [key ki datatype integer h or value ki datatype string h]


m[1] = "abc";                //o(log(n))
m[5] = "cdc";
m[3] = "acd";

m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega
print(m);
auto it = m.find(3);    //o (log(n) )         // is find function m 3 ki value find krni h to m.find(3) function 
                                      
                                   //   use hoga or ye iterator return karega ex: 3 ki value ka iterator

                                //  return karega

if(it!=m.end())                  // ye ek safety cheque h m.erase karne se phle  lga do ??
{
m.erase(3);                      //isme 3 delete ho jayega

}
//m.erase(it);                   2nd method // isme itrator ki value bhi de skte h ex: (it)= to m.find(5)m 5 vlue 

                               //  delete ho jayegi


 /*if(it==m.end())
 {
   cout<<"no value";

 }                                    //  agr 3 ki value map me nhi h  to ye m.end()return karega

else{

cout<<(*it).first <<" "<< (*it).second<<endl;


}

*/

print(m);
return 0;
}
//}*/



//m.clear() fuction uses:  ye function map ko clear kr dege




/*void print(map<int,string>&m)
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

 map<int,string>m;            


m[1] = "abc";                //o(log(n))
m[5] = "cdc";
m[3] = "acd";


m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega

auto it = m.find(3);    //o (log(n) )         // is find function m 3 ki value find krni h to m.find(3) function 
                                      
                                   //   use hoga or ye iterator return karega ex: 3 ki value ka iterator

                                    //  return karega

if(it!=m.end())                  // ye ek safety cheque h m.erase karne se phle  lga do ??

m.erase(3);                      //isme 3 delete ho jayega


//m.erase(it);                   2nd method // isme itrator ki value bhi de skte h ex: (it)= to m.find(5)m 5 vlue 

                                //  delete ho jayegi


 m.clear();                    //m.clear() ye function pure map ko clear kr dega is function se only 
         
                             // 0 print karega


print(m);


}*/


//isme dono data type string li h uses:


//void print(map<int,int>&m)                // ye only int m use hoga
/*void print(map<string ,string>&m)
{

    cout<<m.size() << endl;
                                       //  [insertion o(log(n))]h or pair ki value nikalne ki b o(log(n))h
    for(auto &pr : m)                  //  [is time pr m or p ka address same h]
    {

        cout<<pr.first <<" "<<pr.second <<endl;    

    }

}


int main()
{

 map<int,string>m;            


// m[1] = "abc";                //o(log(n))
// m[5] = "cdc";
// m[3] = "acd";



//m.insert({4,"afg"});        // isse se bhi likh skte h = isme pair ayega


m["abcd"]="abcd";           // s.size( )*log(n) hota h [s.size()ek us string ka size jo m insert kr rha hu]
                               // or n hamare map ka size h] har bar log (n) nhi h ye sirf string m h




auto it = m.find(7);    //o (log(n) )         // is find function m 3 ki value find krni h to m.find(3) function 
                                      
                                   //   use hoga or ye iterator return karega ex: 3 ki value ka iterator

                                    //  return karega

if(it!=m.end())                  // ye ek safety cheque h m.erase karne se phle  lga do ??

//m.erase(3);                      //isme 3 delete ho jayega


m.erase(it);                   //2nd method // isme itrator ki value bhi de skte h ex: (it)= to m.find(5)m 5 vlue 

                                //  delete ho jayegi


 m.clear();                    //m.clear() ye function pure map ko clear kr dega is function se only 
         
                             // 0 print karega


print(m);


}*/

