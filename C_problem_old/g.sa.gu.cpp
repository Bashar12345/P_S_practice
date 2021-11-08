#include<bits/stdc++.h>  ///unfinished

using namespace std;

int main()
{
    int a,b,l,s;
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
     b=s ;}
    while ((b%a)!=0)
    {
    int  c=b%a;
         b=b/a;
        cout<<" G.sa.gu :"<<b<<endl;
       // cout<<" G.sa.gu :"<<a<<endl;
    }
    cout<<" G.sa.gu :"<<b<<endl;

   // int d =

}
