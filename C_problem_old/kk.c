#include <stdio.h>
#include<math.h>
#include "bashar.txt"

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    basar();
    int c=pow(x,y);
    printf("Power of (%d)^%d=%d",x,y,c);
    //sum(x,y);
    //sub(x,y);
    //mul(x,y);
    //div(x,y);

    return 0;
}
