#include <bits/stdc++.h>    ///finished
using namespace std;
int main()
{
    int n,i,j,k,l,c=0;
    char a[10000];
    cout<<"enter the test case number"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%c",&a);
        gets(a);

        for(j=0;j<strlen(a);j++)
        {
            if(a[j]==32)
            {
                c++;
            }
        }
        cout<<"Count = "<<c+1<<endl;
    }
}
