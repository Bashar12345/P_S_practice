#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=0,j,n=0;
    char a[50],b;
    cout <<"Enter the letters"<<endl;
    cin>>a;
    n=strlen(a);
       while(i<n)
       {
           if(a[i]>=65 && a[i]<97)
           {
               cout<<a[i];
           }
           else if(a[i]>=65 && a[i]<97)
           {
               b=a[i]+32;
               cout<<b;
           }
           else { b=a[i]-32;cout<<b;}
           i++;
       }

}

