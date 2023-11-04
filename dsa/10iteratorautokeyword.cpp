#include<bits/stdc++.h>
using namespace std;


/*int main()
{

   vector <int>v={2,3,5,6,7};

   for(int i=0;i<v.size();++i)
   {
       cout<<v[i]<<" ";






   }

   cout<<endl;

  // vector<int>::iterator it;

   //cout<<(*(it+1))<<endl;

   for( auto it=v.begin();it!=v.end();++it)     // [for loop isliye lga kuki iterator ki value end tak nhi huchti]

  {

                                          //   [ye without range loop m hota h]
     cout<<(*it)<<" ";

  }


cout<<endl;


vector<pair<int,int>>v_p={{1,2},{2,3}};

//for( pair<int,int> &value : v_p)
for(auto & value : v_p)
{

   cout<<value.first<<" "<<value.second;




}




auto a=1;
cout <<a << endl;                   //[auto keyword use kia h]
                                    //[isme 1 value last me pprint hogi  ex: 1223 1]


}*/




//2nd short method autokeyword use:

int main()

{


vector<pair<int,int>>v_p = {{1,2},{2,3}};

for(auto &value : v_p)
{
   cout<<value.first<<""<<value.second;

}

auto a=1.0;
cout<<a <<endl;





}