#include<bits/stdc++.h>
using namespace std;


// void printvec(vector<int>&v)
//  {
// // //    //cout<<"size:"<<v.size()<<endl;
//     for(int i=0;i<v.size();++i) 
//    {

// // //    // v.size()-> 0(1)           
//     cout<<v[i]<<" ";


// }
// cout<<endl;
// }



int main()
{
   // vector <vector<int>>v; 
int N,n;
cout<<"enter element";          
cin>>N;                          



//vector <int> v [10];         //[10 vector h jiska size 0 h]

vector<vector<int>>v; 
                                //[N vector declare kiye h]
          // [vector of vector declare kia h]


for(int i=0;i<N;++i)          
{
   //int n;
   cout<<"row element"<<endl;

   cin>>n;

   vector<int>temp;           //[isme temp vector declare kia h]
   for(int j=0;j<n;++j)
   {
      int x;
         cin>>x;
    temp.push_back(x);
        


   }}
   //v.push_back(temp);              //[yha p no of rows m kabhi b increase or decrease kr skta hu = 
                                           
                                       //   = push_back or push_pop function se





  for(int i=0;i<N;++i)
 {
for(int j=0;j<n; ++j){
   cout<<v[i][j];

 }}


// }
//                      //[ye 2d vector ki tarah behave krta h]          
  
                                            // [isme ye print nhi ho rha]
                                           //[isme row fixed h or= column change ho rha h]
 return 0;                                              
}