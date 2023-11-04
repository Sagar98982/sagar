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

   vector<int>::iterator it;

   //cout<<(*(it+1))<<endl;

   for(it=v.begin();it!=v.end();++it)     // [for loop isliye lga kuki iterator ki value end tak nhi huchti]

  {

                                          //   [ye without range loop m hota h]
     cout<<(*it)<<" ";

  }



//: isme simple range loop or copy vali value niche vale variable me ayegi

 /*for(int value : v)
  {

    value++;                    // [vector ki value 2,3,5,6,7 niche vale value  m copy ho jayegi   ]
    //cout<<value<<"";          // [ye sirf rangeloop m hota h]
                              // [isme 2,3,5,6,7 ye value vale variable me aa jyege]
  }


for(int value : v)
{
                                 
    cout<<value <<" ";
}

cout<<endl;*/





//:refernce se actual value ayegi

/*for(int & value: v)
{                          //[isme refence (&) se actual value aa jayegi ]

  value++;                  //  [ ex: vector se 2,3,5,6,7 niche vale value  variable  me actual value ayegi]

  //cout<<value<<" ";



}

for(int value : v)
{
    cout<<value<<" ";
}



cout<<endl;

}*/


//vector pair m bhi range loop use:


vector<pair<int,int>>v_p={{1,2},{2,3}};

for(pair<int,int> &value : v_p)
{

   cout<<value.first<<" "<<value.second;




}

cout<<endl;
}