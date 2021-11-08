#include<bits/stdc++.h>   ///unfinished

using namespace std;

int main()
{
    int i,j,k,l,n;
    char c='0',d='1';
    char a[100][100];
       cout<<" Enter how many Test case u want "<<endl;
   // cin>>n;
 /*   for (i=0; i<n; i++)
     {*/
        cout<<" Enter the size of the binary number "<<endl;
        cin >>l;
        if(l==1)
        {
            printf("0\n");
            printf("1");
        }
else{
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
           a[i][j]='1';
           if(j!=0 && )
           {
               a[i][j]='0';
           }
        }
    }
    a[i][j]='\0';
     for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%c",a[i][j]);
        }
        cout<<"\n";
    }
     }
     }
