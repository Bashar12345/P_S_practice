#include<stdio.h>
int main()
{
    char name[100],nam[100],na[100];
    FILE *p,*p1;

    p=fopen("u.txt","a");
    fprintf(p,"%s",name);
    fclose(p);
    p1=fopen("d.txt","a");
    fclose(p1);
    p=fopen("u.txt","r");
    p1=fopen("d.txt","w");
    scanf("%s",name);
    while(fscanf(p,"%s",nam)!=EOF)
    {
        if(strcmp(name,nam)==0)
        {

        }
        else
        {
            fprintf(p1,"%s\n",nam);
        }
    }
    fclose(p);
    fclose(p1);
    p=fopen("u.txt","w");
    p1=fopen("d.txt","r");
    while(fscanf(p1,"%s",nam)!=EOF)
    {
        fprintf(p,"%s\n",nam);
    }
    fclose(p);
    fclose(p1);
    remove("d.txt");

}
