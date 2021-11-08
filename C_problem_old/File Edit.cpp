#include<bits/stdc++.h>

using namespace std;
int main()
{
    char user[100],pass[10],ChangeUser[100],ChangePass[10];
   /* printf("Enter the username ");
    scanf("%s",user);
    printf("Enter the password ");
    scanf("%s",pass);*/
    FILE *p,*p1;
 /*   p=fopen("Edit.txt","a");
    fprintf(p,"%s %s\n",user,pass);
    fclose(p);
   p=fopen("Edit.txt","r");
   while(fscanf(p,"%s %s",user,pass)!=EOF)///file er sesh projonto scan krsi
   {
       printf("%s %s\n",user,pass);
   }
   fclose(p);*/
   ///EDIT korar jonno nicher code krte hobe
     printf("Enter the username ");
    scanf("%s",ChangeUser);
    printf("Enter the password ");
    scanf("%s",ChangePass);
   p=fopen("Edit.txt","r");
   p1=fopen("Edit_dusbin.txt","w+");
    while(fscanf(p,"%s %s",user,pass)!=EOF)///file er sesh projonto scan krsi
   {
       if(strcmp(user,ChangeUser)==0){
       fprintf(p1,"%s %s\n",ChangeUser,ChangePass);}
       else
       {
           fprintf(p1,"%s %s\n",user,pass);
       }

   }
   fclose(p);
   fclose(p1);
   p1=fopen("Edit_dusbin.txt","r+");
   p=fopen("Edit.txt","w");
     while(fscanf(p1,"%s %s",user,pass)!=EOF)///file er sesh projonto scan krsi
   {
           fprintf(p,"%s %s\n",user,pass);

   }
   fclose(p);
   fclose(p1);

}
