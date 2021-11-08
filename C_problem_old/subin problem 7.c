#include<stdio.h>
#include<math.h>    //unfinished
int main()
{
    int a[100],b,i,j,n,k[100],m;
    int large=0,small=1000;
    printf("Enter how many line you want to check???\n");
    scanf("%d",&n);
    printf("Enter the numbers of the line \n");
    for (i=0 ; i<n; i++)
    {
        scanf("%d",&b);
        b=sqrt(b);
             if(b%2)
             {
                 printf("odd ");
             }
             else
                {
                    printf("even");
                }
    }
}
