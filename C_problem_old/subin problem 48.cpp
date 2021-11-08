#include<bits/stdc++.h>   ///finished
using namespace std;
int main()
{
    int i,j,k,x,n,sum=0;
    cout<<"Enter how many test u want\n";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        cin>>k;
        if(x>10 && k>6)
        {
            cout<<" You have to enter 'X'and 'K' lower than 10 and 6"<<endl;
        }
        for (j=0; j<=k; j++)
        {
            sum=pow(x,k)+sum;
        }
        for (j=0; j<=k; j++)
        {
            cout<<x<<"^"<<j<<" + ";
        }
        cout<<" = "<<sum;
    }

}
