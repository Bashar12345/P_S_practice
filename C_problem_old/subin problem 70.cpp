#include <bits/stdc++.h>    ///finished
using namespace std;
int main()
{
    int n[100],i,j,k[100],l,c=0;
       cout<<"enter the test case number"<<endl;
    cin>>l;
    for(i=0;i<l;i++){
    cin>>n[i];
    if(n[i]<=pow(2,64)-1)
    {
       for(j=1; j<n[i]; j++)
        {
            if(n[i]%j==0)
            {
                k[i]=k[i]+j;
            }
        }
    }
    }
 for(i=0; i<l; i++)
        {
              if(n[i]==k[i])
            cout<<"YES, "<<n[i]<<" is a perfect number \n";
        else
            cout<<"NO, "<<n[i]<<" is not a perfect number \n";
        }

}

