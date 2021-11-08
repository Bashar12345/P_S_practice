#include<stdio.h>
int main()
{
    int lenth,wide,height,n,i;
    printf("Enter how many boxes you want to  count??\n");
    scanf("%d",&n);
    int sum[10];
    for(i=0; i<n ;i++)
    {
        printf("Enter the lenth and wide and height??\n");
        scanf("%d %d %d",&lenth,&wide,&height);

        if(lenth<100 && wide<100 && height<100)
        {
            sum[i]=lenth*wide*height;
        }
        else
            printf("Wrong input!!!!!!!!");
    }
    for(i=0; i<n; i++)
    {
        printf("Boxes Have %d \n",sum[i]);
    }
}
