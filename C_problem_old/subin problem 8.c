#include<stdio.h>
#include<math.h>    //finished
int main()
{
    int a,i=0,j,n;
    float avarage,k[100];
    printf("How many line u want to avarage\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a);
            if (a<=100)
            {
                avarage=a+avarage;
            }
            else
            {
                printf("wrong");
            }
        }
        avarage=avarage/5;
        k[i]=avarage;
    }
    for(i=0; i<n; i++)
    {
        printf("avarage = %f\n",k[i]);
    }
}
