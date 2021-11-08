#include <stdio.h> ///finished
int main()
{
    int n,i,m,j,c=0,k[100];
    char a[100];
    printf("How many line you want to count ");
    scanf("%d",&n);
    for ( i=0; i<n; i++)
    {
        printf("Enter the values");
        scanf("%s",a);
        m=strlen(a);
     //   printf(" %d\n",m);
         for(j=0;j<m;j++)
        {
            if(a[j]=='0' && a[j-1]>'0')
             {c++;}
            else if(a[j]=='0')
               {

            }
            else{c++;}
        }
        printf("%d\n",c);
          k[i]=c;
          c=0;
    }

}
