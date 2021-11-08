#include<bits/stdc++.h> ///finished
using namespace std;
int main()
{
     int i,j,k,l,n,m;
     cout<<" Enter the test case u wnt to try "<<endl;
     cin>>l;
     for(i=0;i<l;i++)
     {
         cin>>n>>m;
         for(j=1;j<=n;j++)
         {
             for(k=0;k<j;k++)
                {
             cout<<m;}
             cout<<"\n";
         }
         for(j=n-1;j>0;j--)
         {
             for(k=0;k<j;k++)
                {
             cout<<m;}
             cout<<"\n";
         }
     }
}
