#include<bits/stdc++.h>   ///FINISHED
using namespace std;
int main()
{
    int i,t,j,k,n;
    cout<<"Enter the total test case "<<endl;
    cin>>t;
    char a[100];
    scanf("%c",&a);
    gets(a);
    for(j=0;j<strlen(a);j++)
    {
        if(a[j]==65)
            cout<<1;
        else if(a[j]>65 && a[j]<=90){
            a[j]=a[j]-64;
            printf("%d",a[j]);
        }
    }
}
