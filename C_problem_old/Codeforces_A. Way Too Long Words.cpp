#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,n;
    char word[100];
    cin>>n;
    if(n>=1 && n<=100)
    {
        for(i=0; i<n; i++)
        {
            cin>>word;
            int l=strlen(word);
            if(l>10)
            {
                cout<<word[j]<<l-2<<word[l-1]<<endl;
            }
            else
            {
                cout<<word<<endl;
            }
        }
    }
}
