#include<bits/stdc++.h>
using namespace std;


void printvec(vector<int>&v)
{
   //cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i) 
    {
       
   // v.size()-> 0(1)  
            
    cout<<v[i]<<" ";


}

cout<<endl;

}



int main()
{
int N;
cout<<"enter element";          
cin>>N;                          



//vector <int> v [10];         //[10 vector h jiska size 0 h]

vector<int>v[N];                 //[N vector declare kiye h]

for(int i=0;i<N;++i)          
{
   int n;

   cout<<"row element"<<endl;

   cin>>n;
   for(int j=0;j<n;++j)
   {
      int x;
         cin>>x;
     v[i].push_back(x);
        


   }
                      


}


for(int i=0;i<N;++i)
{

 printvec(v[i]);





}



}