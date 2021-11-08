#include<stdio.h>
#include<math.h>    //finished
int main()
{
    int i=0,j,n,l,m;
    float a,avarage,k[100];
    printf("How many line u want to avarage\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
        for (i=0; i<n; i++)
    {
        printf("The subject totals");
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%f",&a);
            avarage=a+avarage;
        }
        avarage=avarage/m;
        k[i]=avarage;
    }

        for (i=0; i<n; i++)
    {
        printf("AVARAGE = %.2f\n",k[i]);
    }
}
