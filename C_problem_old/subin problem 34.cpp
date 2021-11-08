#include<bits/stdc++.h>      ///finished

using namespace std ;

int main()
{
    int time,minute,hour,second,n,i,j,k,l;
    int month,day,week,year;
    cout<<"How mant test you want "<<endl;
//   cin>>n;
    cout<< "Enter the seconds of time "<< endl;
    cin>>time;

    if(time==1 && time!=0)
    {
        cout<<time <<" second "<<endl;
    }
    else if(time <60)
    {
        cout<<time<<" Seconds"<<endl;
    }
    else if (time==60 || time <3600)
    {
        minute = time/60;
        second = time%60;
        cout<<minute <<" Minutes "<<second <<" Seconds "<<endl;
    }
    else if (time<(24*3600))
    {
        hour=time /3600;
        time =time %3600;
        minute = time/60;
        time =time%60;
        second = time%60;
        cout<< hour<<" Hour "<<minute <<" Minutes "<<second <<" Seconds "<<endl;

    }
    else if (time<(30*24*3600))
    {
        if(time==(24*3600))
            cout<<" 1 day "<<endl;
        day =time /(24*3600);
        time =time%(24*3600);
        hour = time/3600;
        time =time%3600;
        minute = time/60;
        time=time%60;
        second = time%60;
        cout<<day<<" Days "<<hour<<" Hour "<<minute <<" Minutes "<<second <<" Seconds "<<endl;

    }
    else if (time<(12*30*24*3600))
    {
        if (time==(30*24*3600))
            cout<<" 1 month "<<endl;
        month=time/(30*24*3600);
        time =time%(30*24*3600);
        day =time /(24*3600);
        time =time%(24*3600);
        hour = time/3600;
        time =time%3600;
        minute = time/60;
        time=time%60;
        second = time%60;
        cout<<month<<" Months "<<day<<" Days "<<hour<<" Hour "<<minute <<" Minutes "<<second <<" Seconds "<<endl;

    }
    else
    {
        if(time == (12*30*24*3600))
        {
            cout<<" 1 Year "<<endl;
        }
        else
        {
            year=time/(365*30*24*3600);
            time= time%(365*30*24*3600);
            month=time/(30*24*3600);
            time =time%(30*24*3600);
            day =time /(24*3600);
            time =time%(24*3600);
            hour = time/3600;
            time =time%3600;
            minute = time/60;
            time=time%60;
            second = time%60;
            cout<<year<<" Years "<<month<<" Months "<<day<<" Days "<<hour<<" Hour "<<minute <<" Minutes "<<second <<" Seconds "<<endl;
        }
    }
}
