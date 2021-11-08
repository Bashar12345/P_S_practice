#include<bits/stdc++.h>   ///finished
using namespace std;
int main()
{
    int i,j,k[100],l[100],n;
    cout<<"Enter the test case "<<endl;
    cin>>n;
    if(n<=100)
    {
        for(j=0; j<n; j++)
        {
            cin>>k[j]>>l[j];

            if(k[j]<l[j] && l[j]<=1000000)
            {
                for (i=k[j]; i<l[j]; i=i+k[j])
                {
                    cout<<i<<endl;
                }
            }
            else
                cout<<"Invalid"<<endl;
        }
    }
}
