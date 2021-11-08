#include<bits/stdc++.h>      ///finished
using namespace std;
int main()
{
    int i,j,k,l,c=0;
    int n,m[100];
    cout<<"Enter the test case "<<endl;
    cin>>l;
    for(i=0; i<l; i++)
    {
        cout<<"Enter the size of the array"<<endl;
        cin>>n;
        if(n!=0 && n<=24)
        {
            for(j=0; j<n; j++)
            {
                cin>>m[j];
            }
        }
        for(j=0; j<n; j++)
        {
            if(m[j]>m[j+1])
            {
                cout<<" NO "<<endl;c++;
                break;
            }
        }if(c==0)
          cout<<"YES "<<endl;

          c=0;
    }

}
