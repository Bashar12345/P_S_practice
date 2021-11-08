#include<bits/stdc++.h>   ///finished

using namespace std;

int main()
{
    int a[20],b[20],i,j,l,k,n;
    cout<<"How many test you want"<<endl;
    cin>>n;
    cout<<"Enter the Elements"<<endl;
     for(l=0;l<n;l++)
    {
     cout<<"Triangle"<<endl;
        cin>>a[l];
        cout<<"size"<<endl;
        cin>>b[l];
    }
    for(i=0;i<n;i++)
    {

        cout<<" Case : "<<i+1<<endl;
        for(j=0;j<b[i];j++)
        {
            for(k=-1;k<j;k++){
            cout<<a[i];}
            cout<<endl;
        }

    }
}
