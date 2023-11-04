#include<bits/stdc++.h>
using namespace std;





void printvec(vector<pair<int,int>>&v)
{
   //cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i) 
    {

   // v.size()-> 0(1)           
    cout<<v[i].first<<" " <<v[i].second<<endl;

}

cout<<endl;

}









int main()
{

//vector<pair<int,int>>v={{1,2},{2,3},{4,5}};          //[isme vector ka pair banana h] 1st method


vector <pair<int,int>>v;                                //[2nd method]
printvec(v);


int n;
cout<<"enter elemnents";
cin>>n;

for(int i=0;i<n;++i)
{

    int x,y;
    cout<<"pair value input";
    cin>>x>>y;
   // v.push_back({x,y});
    v.push_back(make_pair(x,y));                 // [is se  bhi likh skte h]



}


printvec(v);




}