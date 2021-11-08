#include<bits/stdc++.h>  ///finished
using namespace std;
int main()
{
    int i,j,k[100],l,n,m,t,c=0;
    cout<<"Enter the total test case "<<endl;
    cin>>t;
    for (i=0; i<t; i++)
    {
        cin>>m>>n;
        if ((n-m)<100000)
        {
            for (j=m; j<n; j++)
            {
                if(j==1||j==2 ||j==3 || j==5 || j==7)
                    c++;
                else if(j%2==0 || j%3==0||j%5==0 ||j%7==0) {}
                else
                    c++;

            }
            k[i]=c;
        }
        c=0;
    }
      for(i=0;i<t;i++)
        {
             cout<<k[i]<<endl;
        }
}
