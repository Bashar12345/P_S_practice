#include<stdio.h>
#include<math.h>    //unfinished
int main()
{
    int day=0,i=0,m=0,n,o=0,p=0,t=0,k[100];
    int d,y;
    int date=7,month=8,year=1419;
    printf("Enter the today date \n\n");
    printf(" Enterf the date :");
    scanf("%d",&date);
    printf("Enter the month :");
    scanf("%d",&month);
    printf("Enter the Year :");
    scanf("%d",&year);

    printf("Enter how peoples ageS u are going to count'''' \n");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("What is your birth date ????????\n");
        printf(" your year :");
        scanf("%d",&y);
        y=y+1;
        printf(" Your month :");
        scanf("%d",&m);
        printf(" Your date :");
        scanf("%d",&d);
        t = (year - y);
        printf("%d\n",t);
        t= t*365;
        printf("%d\n",t);
        if(m<=5 && m!=0)
        {
            m=m-1;
            o=(m*31)+d;
            o=365-o;
            if(month>=6)
            {         month=month-6;
           // date=d-date;
           printf("%d\n", month);
        day=(month*30)+(5*31)+date;

               // p=365-day;
            }
            else
            {
                month=month-1;
                month=(month*31)+date;
              //  p=365-month;
            }
            o=o+day;
        }
        else if(m>=6 && m<=12)
        {
            m=m-6;
            o=(m*30)+(5*31)+d;
            o=365-o;
            if(month>=6)
            {
                month=month-6;
                printf("%d\n", month);
              //  date=d-date;
                day=(month*30)+(5*31)+date;
                 printf("%d\n", day);
               // p=365-day;
            }
            else
            {
                month=month-1;
                day=(month*31)+date;

               // p=365-day;
            }
            o=o+day;
        }
        if((y%400)==0 && (y%100)==0 && (y%4)==0)
        {
            t=t+o;
        }
        else
        {
            t=t+o+1;
        }
        k[i]=t;
    }
    for (i=0; i<n; i++)
    {
        printf(" No: %d you aged  %d \n",i,k[i]);
    }

}




