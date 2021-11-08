#include<bits/stdc++.h>    ///finished

using namespace std;

int main()
{
    int a,b,c=2,i=1,j,n,d=1,e=0,k[0];

    cout<<"How many case you want to test"<<endl;

    cin>>n;

    for(i=0; i<n; i++)
    {

        cin>>a;
        d=a;
        cin>>b;
        cout<<"Case "<<i+1<<":";
        c=2;
        while(d<b || d==b)
        {
          cout<<" "<<d<<" ";
            d=a*c;
            c++;
        }
        cout<<endl;
    }
}

