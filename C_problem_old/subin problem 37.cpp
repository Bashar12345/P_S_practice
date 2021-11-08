#include <bits/stdc++.h> ///finished

using namespace std;

int main()
{
    int n,i,d,m,j;
    char number[100],a[20];
    cout<<"How many Test you want "<<endl;
    cin>>m;
    for(j=0; j<m; j++)
    {
        cout <<"Enter the numbers"<<endl;
        cin>>number;
        n=strlen(number);
        for(i=0; i<n; i++)
        {
            if (number[i]>=48 && number[i]<58)
            {
                a[i]=number[i];
                d=atoi(a);
                if (d%2==0)
                {
                    //cout<<d;
                    number[i]=number[i]+1;
                    //cout<<endl<<number[i];
                }
                else
                {
                    number[i]=number[i]-1;
                    //cout<<endl<<number[i];
                }
            }
        }

      //  number[i]='\0';

        cout<<number<<endl;
    }

}
