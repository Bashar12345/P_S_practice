#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k[100],l,s,n,a,b,c;
    cout<<" Enter the test case "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<"Enter the  A :"<<endl;
    cin>>l;
    cout << "Enter the    B:"<<endl;
cin>>s;
if(l>s)
{
     a=s;
    b=l;
}
else
{
     a=l;
     b=s ;
}
   if((b%a)==0)
   {
       cout<<" LCM = "<<b<<endl;
   }
   else
    {

     cout<<" LCM = "<<endl;
    }


    }
}
