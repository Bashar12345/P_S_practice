#include<bits/stdc++.h>   ///finished

using namespace std;

int main()
{
    int i,j,k=0,l,n,counter=1,flag=0,index=0;
    char a[1000],temp;
    cout<<" Enter how many test case u want to count : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        l=strlen(a);
        cout<<l<<endl;
        for(j=0; j<l; j++)
        {
            for(k=j+1; k<l; k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[k];
                    a[k]=a[j];
                    a[j]=temp;

                }
            }
        }
        for(j=0; j<l; j++)
        {
            for(k=j+1; k<l; k++)
            {
                if(a[j]==a[k])
                {
                    counter++;
                }
            }
            if(flag==0)
            {
                printf("%c = %d \n",a[j],counter);
                flag++;
            }
            if(a[j]!=a[index])
            {
                printf("%c = %d \n",a[j],counter);
                index++;
            }
            counter=1;
        }
        flag=0;
        index=0;

    }

}

