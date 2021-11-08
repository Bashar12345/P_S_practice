#include<bits/stdc++.h>       ///finished

using namespace std;

int main()
{
    int a[20],b,b1,n,n1,n2,n3,i,j,j1,k,l;
    cout<<"How many u want to test"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout <<"Enter the values of Series Serialy "<<endl;
        cin >>n1;
        cin>>n2;
        cin>>n3;

        b=n2-n1;   ///dhara
        b1=n3-n2;
        j=n1*n1;
        j1=n2*n1;
        if(n1==n2 && n2==n3)
        {
            cout <<" Both "<<endl;
        }
        else if (j==n2 && j1==n3)
        {
            cout << " Geometric Progression "<<endl;
        }
        else if(b==b1)
        {
            cout<<" Arithmetic Progression "<<endl;
        }
        else
        {
            cout <<" None "<< endl;
        }
    }
}
