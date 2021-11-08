#include<bits/stdc++.h>   ///unfinishesd

using namespace std;

int main()
{
    int m,i,j=0,k=0,n,l=0,c,o=0,p=0;
    char a[150],b[150];
    cout<<" Enter how many Test case u want "<<endl;
    cin>>n;
    cout<< " Enter the Sentences "<<endl;
    //for (i=0; i<n; i++)
    // {
    scanf("%c",a);
    gets(a);
    cout<<"\n"<<a<<endl;
    m=c=strlen(a);
    cout<<"\n"<<m<<endl;
    for (j=m+1; j>-2; j--)
    {
        if(a[j]==32 || a[-1]==NULL)
        {
        //   printf("\n vitorer %d\n",j);
            for(k=j+1; k<c; k++)
            {
                printf("%c",a[k]);

            } cout<<" "; c=j;
        }

    }
    // }
}
