#include<bits/stdc++.h>     ///finished
 using namespace std;

int main()
{
    int line,hour[3],minute[3],sec[3],tali=0,l[3];
    cout<<"How many You want to count"<<endl;
    cin>>line;
    for(int k=0;k<line;k++)
    {
        for (int j=0;j<2;j++)
        {
         cin>>hour[j]; cin>>minute[j]; cin>>sec[j];
          if (hour[j]>=0 && hour[j]<24 && minute[j]>=0 && minute[j]<60 && sec[j]>=0 && sec[j]<60){}
          else
          {
              cout<<"\n Wrong input "<<endl;
              j--;
          }
        }
        cin>>tali;
      //  cout<<tali<<endl;

         //     int i=0,j=0;      // i-1
//cout<<hour[0]<<" "<<minute[0]<<" "<<sec[0]<<" "<<endl;
         //   hour[j]=hour[i+1];minute[j]=minute[i+1];sec[j]=sec[i+1];

 //cout<<hour[0]<<" "<<minute[0]<<" "<<sec[0]<<" "<<endl;
 //cout<<hour[1]<<" "<<minute[1]<<" "<<sec[1]<<" "<<endl;
            if(hour[0]==hour[1] && minute[0]==minute[1] && sec[0]>sec[1])
            {
                hour[1]=hour[1];minute[1]=minute[1]+1 ;sec[1]=sec[1]+60;

            }
             else if(hour[0]==hour[1] && minute[0]>minute[1] && sec[0]>sec[1])
            {
                hour[1]=hour[1]+1;minute[1]=minute[1]+58+1 ;sec[1]=sec[1]+60;

            }
              else if(hour[0]>hour[1] && minute[0]>minute[1] && sec[0]>sec[1])
            {
                hour[1]=hour[1]+22+1;minute[1]=minute[1]+58+1 ;sec[1]=sec[1]+60;

            }
           else if(hour[0]<=hour[1] && minute[0]<= minute[1] && sec[0]<=sec[1])
                {
                  }
                  else{cout<<"Wrong"<<endl;}

                    int h=hour[1]-hour[0];int m=minute[1]-minute[0];int s=sec[1]-sec[0];
               h=h*3600;m=m*60;
               int time=h+m+s;
               tali=time*tali;

                l[k]=tali;
               cout<<"Total Tali : "<<tali<<endl;
    }
      for(int k=0;k<line;k++)
    {  cout<<"No: "<<k<<" ToTal Tali Count"<<l[k]<<endl; }


}
