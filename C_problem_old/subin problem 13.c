#include <stdio.h>
#include <string.h>
/// finished
/// string ti suru hobe ekti dihgit diye abong sesh hobe ekti digit diye .
/// moddhoborti kono sthane digit batito onno kono character pashapashi thakbe na .
int main()
{
    int n,i,m,j,c=0,k[100];
    char a[100],b;
    printf("How many line you want to count \n");
    scanf("%d",&n);
    for (i=0; i<n   ; i++)
    {
        printf("Enter the set of strings\n");
        for(c=0; c<50; c++)
        {
            a[c]=getche();
            if(a[c]==13)
            {
                break;
            }
        }
        //  scanf("%s",a);
        m=strlen(a);
        for (j=0; j<m; j++)
        {
            if (a[j]>=65 && a[j]<=122)
            {

                if(a[j]==76 || a[j]==108)
                {
                    a[j]= a[j-1];
                }
                else if(a[j]==82 || a[j]==114)
                {
                    a[j]= a[j+1];
                }
                //printf("%c\n",&a[j]);
            }
        }
        printf("\n\n Answer %s \n", a);
    }

}
