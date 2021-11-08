#include<bits/stdc++.h>      ///finished
using namespace std;
int main()
{
    int i,j,k,l,n;
    char a;
    cout <<"Enter  the test case (total) "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if (a>=65 && a<=91)
        {

            cout<<" Uppercase Character \n"<<endl;
        }
        else if(a>=97 && a<=122)
        {

            cout<<" Lower  Character \n"<<endl;
        }
        else if (a>=48 && a<=57)
        {

            cout<<" Numeric digit \n"<<endl;
        }
        else
        {
            cout<<" Special number \n"<<endl;
        }
    }
}
