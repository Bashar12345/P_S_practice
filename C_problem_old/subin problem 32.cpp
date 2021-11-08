#include<bits/stdc++.h>  ///finished

using namespace std;

int main()
{
    int n,Height,width,i,j,l;
    int a[20],b[20],k[20];
    cout<<"How many triangle You want to count"<<endl;
    cin>>n;
    cout<<" Enter the Width First"<<endl;
    cout<<"\n Enter the Height "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
       k[i]=(a[i]*b[i]);   ///tribuger khetrofal er digun
    }
    for(i=0;i<n;i++)
    {
        cout <<" Case "<<i<<":  "<< k[i]<<endl;
    }
}
