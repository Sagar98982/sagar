#include<bits/stdc++.h>
using namespace std;

/*void printvec(vector<int>v)
{
   cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i)  //[v ka size dynamic h or= v.size() means array ka current size b dega ]
    {                            //[isme v.size() me  n ko pass nhi krna padega]

   // v.size()-> 0(1)           //0(1) v.size m  api value return kr dega
    cout<<v[i]<<" ";

}
cout<<endl;

}*/








//int main()
//{
//int a[10];                                  //   [isme array ka size change nhi kr skte]
/*vector<int>v;                               // [isme v abhi 0 h] or [isme vector ka size change kr skte h]


//vector<double>v;                            // [isme vector ko double bhi likh skte h]
//vector<pair<int,int> >v;                    // [isme vector ko pair m bhi likh skte h]

int n;
cin>>n;
for(int i=0;i<n;++i)
{

 int x;
 cin>>x;

 //printvec(v);

 v.push_back(x);                         //[vector bhi array ki tarah hota h = ex: 0[1]]
                                         //[isme 1st value = last me print ho jayegi]




}*/
                                         // [2nt method]           
/*vector<int>v(10);                    //[isme 10 bar 0 hoga = ex: 0000000000]
v.push_back(7);                      //[isme size increase k lie 11th element 7 dala = ex: 00000000007]


printvec(v);*/





                                    //[3rd method]
/*vector<int>v(10,3);             //[isme vector ka size 10 hoga = ex:1 step. 0000000000 
                               //                                   2 step. 33333333337
v.push_back(7);

printvec(v);*/



                                     //[4th method]

/*vector<int>v;                     //[isme only  1 or 7 print hoga]
v.push_back(7);

printvec(v);*/





/*pop_back uses:


vector<int>v;
v.push_back(7);                //[push back m = size 1 or element 7 print ho rha h]
v.push_back(6);                //[push back m = size 2 = 7,6 kaise print ho rha h]
printvec(v);

v.pop_back();                  //  [pop back last value ko delete krat h = ex: 0 print karega]
printvec(v);                  //  0(1)
                               

}
*/

//copy vector uses:


/*vector<int>v;
v.push_back(7);               
v.push_back(6);                
printvec(v);


vector<int>v2 = v;                          //0(n)
v2.push_back(5);
printvec(v);
printvec(v2);

}
    */            





//}

//function se vecto pass krna h to direct v nhi = &v (reference pass krna padega copy ka) uses:




/*void printvec(vector<int>&v)
{
   cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i) 
    {

   // v.size()-> 0(1)           
    cout<<v[i]<<" ";

}
v.push_back(2);
cout<<endl;

}

int main()
{

vector<int>v;
v.push_back(7);               
v.push_back(6);                



vector<int>v2 = v;                          //0(n)
v2.push_back(5);
printvec(v);
printvec(v);
printvec(v2);



}
*/



//isme copy nhi banani = agr same vector chaiye



/*void printvec(vector<int>&v)
{
   cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i) 
    {

   // v.size()-> 0(1)           
    cout<<v[i]<<" ";

}
v.push_back(2);
cout<<endl;

}

int main()
{

  vector<int>v;
v.push_back(7);               
v.push_back(6);                



vector<int>&v2 = v;                          //[isme v2 k age & lagega = agr direct vector chaiye]
v2.push_back(5);
printvec(v);
printvec(v);
printvec(v2);*/




//vector string type uses:



void printvec(vector<string>&v)
{
   cout<<"size:"<<v.size()<<endl;

    for(int i=0;i<v.size();++i) 
    {

   // v.size()-> 0(1)           
    cout<<v[i]<<" ";

}

cout<<endl;

}


int main()
{

   vector<string>v;
   int n;
  cout<<"enter size";
   cin>>n;
   for(int i=0;i<n;i++)         // [isme print nhi ho rha]
   {
     cout<<"enter string"<<endl;
     string s;
     cin>>s;
     v.push_back(s);



   }

printvec(v);

}







