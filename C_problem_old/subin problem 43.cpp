#include<bits/stdc++.h>  ///finished

using namespace std;

int main()
{
    float Target=0,CurrentRun=0,LeftBall=0,TotalOver=50;
    int i,j,k,l,n;
    float CurrentRunRate[100],NeededRunRate[100],FacedOver;
    cout<< "Enter how many test line u want "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<" Enter the run "<<endl;
        cin>>Target;
        cout<<" Enter the Bat'sman run  "<<endl;
        cin>>CurrentRun;
        cout<<" Enter the left Balls "<<endl;
        cin>>LeftBall;

        CurrentRunRate[i] =CurrentRun/((300-LeftBall)/6);
        NeededRunRate[i]=(Target+1-CurrentRun)/(LeftBall/6);
    }
    for(i=0; i<n; i++)
    {
        printf("%.2f %.2f\n",CurrentRunRate[i],NeededRunRate[i]);
    }

}
