#include<bits/stdc++.h>
using namespace std;


vector<int>NGE(vector<int>v)
{
    vector<int>nge(v.size());
    stack<int>st;
    for(int i=0; i<v.size();++i)
    {
        while(!st.empty() && v[i] > v[st.top()])      //st.top ek index h
    {
        nge[st.top()] =i;                       //stack ka top eelement ka next greater hamara v[i]ko
         st.pop();                                           //  assign karega
    }                  
                              
            st.push[i];                      //ab stack m current element dal dege mtlb index dal dege           
} 


    while(!st.empty())
    {
       nge[st.top()] = -1;
       st.pop();


    }
    return nge;

}


int main()
{

  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i< n;++i)
  {

    cin>>v[i];
  }

   vector<int>nge = NGE(v);
    
    for(int i=0;i<n;++i)
    {
       cout<< v[i]<<" " (nge[i] == -1 ?-1 : v[nge[i]])<<endl;    // v[nge] m us element ka index h i element ka next greater hoga
                                             //    issse v[nge] se us element ki value aa jayegi

    }
}