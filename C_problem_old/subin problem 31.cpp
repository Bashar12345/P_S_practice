#include<bits/stdc++.h>   ///finished

using namespace std;

int main()
{
    int a[20],b,c=1,i,j,k,l,n;

    cout<< "Enter the testing subjects "<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Case "<<i+1<<" :";
          while(c<=a[i])
          {
              if(a[i]%c==0)
              {
                  cout<<" "<<c;
              }
              c++;
          }
          c=1;
          cout<<endl;
    }

}
