#include<stdio.h>
#include<math.h>    ///finished
int main()
{
    int i=0,j,n=0,l,m,k[100];
    printf("How many line u want to check\n");
    scanf("%d",&l);
    for (j=0 ; j<l ; j++)
    {
        printf("Enter the numbers\n");
        for (i=0; i<10; i++)
        {
            scanf("%d",&m);
            if (m==2 || m==3 || m==5 || m==7)
            {
                printf("  prime number \n ");
                n++;
            }
            else   if (m%2==0 || m%3==0 || m%5==0 || m%7==0)
            {
                printf(" \n ");
            }
            else
            {
                printf("  prime number \n ");
                n++;
            }
        }
        k[j]=n;
    }
    for (j=0 ; j<l ; j++)
    {
        printf(" In line = %d WE got  :: %d prime numbers ",j+1,k[j]);
    }
}
