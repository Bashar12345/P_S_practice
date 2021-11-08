#include<bits/stdc++.h>   ///finished

using namespace std;

int main()
{
    int a,i,j,k,l,n;
    cout<<" Enter how many test case u want to count : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)

    {
        cout<<" Enter the number "<<endl;
        cin>>a;
        if (a==1 || a==2 || a==3 || a==5 || a==7)
        {
            cout<<a<<" is a prime number "<<endl;
        }
        else if(a%2==0 || a%3==0 || a%5==0 || a%7==0 )
        {
            cout<<a<<" is not 1 prime number "<<endl;
        }
        else
        {
            cout<<a<<" is a prime number "<<endl;
        }
    }
}
