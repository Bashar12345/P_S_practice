#include<stdio.h>
int main()
{
    int a=0,b=0,n,i=0,d=0;
    printf("enter how many elements you want  check??");
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a);
        if(a<0)
        {
            b++;
        }
        else
        {
            d++;
        }
        i++;
    }
    printf("negative=%d positive=%d",b,d);
}
