#include<bits/stdc++.h> ///finished
using namespace std;
int main()
{
    int i,n,p,q,c;int  Result;
        cout<<" Enter the test case u wnt to try "<<endl;
     cin>>n;
    if(n<=100)
    {
        for (i=0; i<n; i++)
        {
            cin>>p>>q>>c;
             if(p<=100 && q<=100 && c<=100)
             {
               Result = pow(p,q);
                Result = Result %c;
             }
             cout<<"Result = "<<Result<<"\n";
        }
}
}
