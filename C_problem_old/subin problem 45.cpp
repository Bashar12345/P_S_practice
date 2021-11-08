#include<bits/stdc++.h>          ///finished
using namespace std;
int main()
{
    int n,i,j,k=1;
    int  a[100];
    cout<<" Enter how many  test case u want  "<<endl;
    cin >> n;
    cout<<"Enter the NUmbers "<<endl;
    for (i=0;i<n;i++)
    {
        cin >> j;
        if (j<=15)
        {
            a[i]=1;
           while(j!=0)
           {

               a[i]=j*a[i];
              // cout<<" "<<a[i]<<endl;
               j--;
           }
        }
        else{
            cout<<"Overload\n";}

    }
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
