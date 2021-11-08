#include<bits/stdc++.h>      ///finished
using namespace std;
int main()
{
    int i,day[100],k=0,n;
  float Total;
     cout<<"Enter the test case "<<endl;
    cin>>n;
    if (n>=1 && n<=1000){
for(i=0;i<n;i++)
{
cin>>Total;
  while(Total>=1)
  {
      k++;
      Total=Total/2;
  }
  day[i]=k;
  k=0;
}
for(i=0;i<n;i++)
{
    cout<< day[i]<<" days\n";
}
}
}
