#include<bits/stdc++.h>      ///finished

using namespace std;

int main()
{
    int i=0,j,k[20],a,b=1,c,d=0,n,e,r=0;
    cout<<"How many piramid U want to made"<<endl;
    cin>>n;
    while(i<n)
    {
        cin>>k[i];
        i++;
    }
    for(j=0; j<i; j++)
    {
        for(a=0; a<k[j]; a++)
        {
            e=k[j]-1;
           while(e>d)
               {cout<<" ";
                   e--;
                }
                e++;
            for(c=0; c<e+r; c++)
            {
                cout<<"*";
            } d++;r++;
            cout<<endl;
        }
    }
}
