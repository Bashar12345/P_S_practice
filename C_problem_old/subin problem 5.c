#include<stdio.h>
#include<string.h>
int main()
{
    char b[4];
    int a,n,i,j,k[4],sum=0;
    printf("\tHow many line you want to count\n");
    scanf("%d",&n);
    for (i=0 ; i<n ; i++)
    {
        printf("Enter The characters ");
        for(j=0; j<3; j++)
        {
           a=getchar();
            sum=sum+a;
        }
        k[i]=sum;
    }
     for (i=0 ; i<n ; i++)
    {
        printf("%d\n",k[i]);
    }
}
