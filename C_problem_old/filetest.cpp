#include <bits/stdc++.h>


int main()
{
    int x,y;
    //FILE *F;
    FILE *ExcelFile = fopen("out.csv","w");
    if (ExcelFile == NULL)
        return -1;
    //fprintf(ExcelFile,"Case,X,Y\n1,2,3\ n");
    freopen("in.csv","r",stdin);
    fprintf(ExcelFile,"X,Y,Sum\n");
    while(scanf("%d%d",&x,&y)==2)
    {
        fprintf(ExcelFile,"%d,%d,%d\n",x,y,x+y);

    }
    fclose(ExcelFile);
    fclose(stdin);
    system("C:\\Program Files\\Microsoft Office\\Office15\\excel.exe\\out.csv");

    return 0;
}
