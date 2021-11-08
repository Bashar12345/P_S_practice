#include<stdio.h>    //finished
int main()
{
    int a[100],b,i,j,n,k[100],m;
    int large=0,small=1000;
    printf("Enter how many line you want to check???\n");
    scanf("%d",&n);
    printf("Enter the numbers of the students\n");
    for (i=0 ; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[j]);
            if(a[i]<=100)
            {

            }
            else if(a[j]>100)
            {
                a[j-1]=a[j];
                printf("wrong input");
            }
        }
    }
    for (i=0 ; i<5; i++)
    {

        if(a[i]>large)
        {
            large=a[i];
        }
        else if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf(" large = %d small = %d\n",large,small);

}
