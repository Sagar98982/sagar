#include<bits/stdc++.h>
using namespace std;

//ist mehod...
/*int main()
{
  map<pair<int,int>,int>m;
 pair<int,int>p1,p2;
 p1={2,2};                
 p2={2,3};
 cout<<(p1<p2);            //p1<p2 h to 1 print hoga ?
 cout<<(p1>p2);            //p1>p2 h to 0 print hoga ?




}*/

//2nd method


/*int main()
{
   
   map<set<int>,int>m;
   pair<int,int>p1,p2;

   set<int>s1={2,2};          //isme 1 print hoga?
   set<int>s2={2,3};

   cout<< (s1 <s2);



}*/



//3rd method

/*int main()
{
   map<pair<string,string>,vector<int>>m;

   int n;
   cin>>n;
   for(int i=0;i<n;++i)
   {

      string fn,ln;

    int ct;
    cin>>fn>>ln>>ct;


for(int j=0;j<ct; ++j)
{

  int x;
  cin>>x;

  m[{fn,ln}].push_back(x)  ;                   //[fn,ln ek pair h  or fn,ln map (m) me dal diya or 
                                               // m[{fn,ln}] ek vector ho gya iske age kuch bhi likh skte h
                                                // ex: push_back
                                                  //   begin()]


}


   }

for(auto &pr :m)
{                                               //& tbi lga taki iski copy na bne
    auto &full_name = pr.first;
    auto &list = pr.second;                    //  list ek vector h //isme number ki ki list bn jaye

    cout<< full_name.first<<" "<<full_name.second<<endl;

   cout<<list.size()<<endl;

   for(auto &element : list)                    //ye for loop list print krne k liye lga
   {
   cout<< element << " ";


   }

          cout<<endl;
}

}*/




//4th method:

int main()
{
   map<pair<string,string>,vector<int>>m;
   set<pair<int,int>>st;                   // [ 4th method m ye  lagega sirf] 

   int n;
   cin>>n;
   for(int i=0;i<n;++i)
   {

      string fn,ln;

    int ct;
    cin>>fn>>ln>>ct;


for(int j=0;j<ct; ++j)
{

  int x;
  cin>>x;

  m[{fn,ln}].push_back(x)  ;                   //[fn,ln ek pair h  or fn,ln map (m) me dal diya or 
                                               // m[{fn,ln}] ek vector ho gya iske age kuch bhi likh skte h
                                                // ex: push_back
                                                  //   begin()]


}


   }

for(auto &pr :m)
{                                               //& tbi lga taki iski copy na bne
    auto &full_name = pr.first;
    auto &list = pr.second;                    //  list ek vector h //isme number ki ki list bn jaye

    cout<< full_name.first<<" "<<full_name.second<<endl;

   cout<<list.size()<<endl;

   for(auto &element : list)                    //ye for loop list print krne k liye lga
   {
   cout<< element << " ";


   }

          cout<<endl;
}

}

