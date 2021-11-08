#include <bits/stdc++.h>  ///finished
using namespace std;
int main()
{
    int a[100],n,i,k,l=0;
    cin>> n >> k;
    if(k>=1 && (n>=k && n<=50))
    {
        for(i=1; i<=n ; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]>k)
            {
                l++;
            }
        }
        cout<<l;
    }
}

