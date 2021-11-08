#include<bits/stdc++.h> ///finished
using namespace std;
int main()
{
    int i,n,t,a[100],b[100],c[100],s;
    float l[100];
    cout<<" Enter the test case u wnt to try "<<endl;
    cin>>n;
    if(n<=1000)
    {
        for (i=0; i<n; i++)
        {
            cin>>a[i]>>b[i]>>c[i];
if ((a[i]+b[i])>c[i] || (b[i]+c[i])>a[i] || (a[i]+c[i])>b[i])
            {
                s=(a[i]+b[i]+c[i])/2;
                l[i]=s*(s-a[i])*(s-b[i])*(s-c[i]);
                l[i]=sqrt(l[i]);
            }
        }
          for (i=0; i<n; i++)
        {
            printf("Area = %.3f\n",l[i]);
        }
    }
}
