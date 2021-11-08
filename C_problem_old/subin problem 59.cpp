#include <bits/stdc++.h>   ///unfinished
using namespace std;
int main()
{
   int i,j,k,l;
   int arm=0;
   char a[5],b;
   cout<<"Enter the number "<<endl;
cin>>a;
   l=atoi(a);
   cout<<l<<endl;
   for(i=0;i<3;i++)
   {
   b=a[i];
   k=atoi(b);
   cout<<b<<endl;
    arm= arm +(k*k*k);
    k=0;
   }
cout<< arm <<endl;
   if (arm==l)
   {
       cout<<arm<<" is a armstrong number!"<<endl;
   }
   else
   {
    cout<<" Not " <<endl;
   }
}
