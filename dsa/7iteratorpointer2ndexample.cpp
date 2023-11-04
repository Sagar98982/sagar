
#include<bits/stdc++.h>
using namespace std;


int main()
{

   vector <int>v={2,3,5,6,7};

   for(int i=0;i<v.size();++i)
   {
       cout<<v[i]<<" ";






   }

   cout<<endl;

   vector<int>::iterator it=v.begin();

   //cout<<(*(it+1))<<endl;

   for(it=v.begin();it!=v.end();++it)     // [for loop isliye lga kuki iterator ki value end tak nhi huchti]

   {
                                          //  ex: 2,3,5,6,7
  cout<<(*it)<<endl;
                                           // solution: 2 se 7 tk  iteretor ki value aa jayegi]



   }


   




}