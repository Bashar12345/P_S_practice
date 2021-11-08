#include<bits/stdc++.h>     ///finished
using namespace std;
int main()
{
    int r1,r2,c1,c2,chal,chal_2;
    int i,a[20],n;
    cout<<"How many Test you want "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the 'R1' "<<endl;
        cin>>r1;
        cout<<"Enter the 'C1' "<<endl;
        cin>>c1;
        cout<<"Enter the 'R2' "<<endl;
        cin>>r2;
        cout<<"Enter the 'C2' "<<endl;
        cin>>c2;
        if (r2>r1)
            chal = r2-r1;
        else
            chal = r1-r2;

        if (c2>c1)
            chal_2 =c2-c1;
        else
            chal_2 =c1-c2;
        if (chal>chal_2)
            a[i]=chal;
        else
            a[i]=chal_2;
    }

    for(i=0; i<n; i++)
    {
        cout<<" Case "<<i<<": "<<a[i]<<endl;
    }
}
