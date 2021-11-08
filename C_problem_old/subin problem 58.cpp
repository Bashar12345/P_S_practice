#include<bits/stdc++.h>     ///finished
using namespace std;
int main()
{
    int i,j,l,n,c=0;
    char a[1000],b;
    cout<<"Enter  how many test case u want ?"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%c",&a);
        gets(a);
        cin>>b;
        l=strlen(a);
        for(j=0; j<l; j++)
        {
            if(a[j]==b)
            {
                c++;
            }
        }
        if(c!=0)
        {
            cout<<"Occurrence of 'l' in '"<<a<<"' = "<<c <<endl;
        }
        else
        {
            cout<<"'"<<b<<"' is not present ";
        }
        c=0;
    }
}
