#include <stdio.h>
#include <stdlib.h>
int main()//admin()
{
    float ebill,gbill;
    char username[20],password[10],user[]="admin",pass[]="12345";
    char month[10],location[100],name[50],change[50],nam[50],n[50];
    int year,nid,i,j,k=2,count=0,date,dat;
    FILE *p;
    p=fopen("Admin record.txt","a");
    fclose(p);
    for(i=0; i<3; i++)
    {
   //     p=fopen("Admin record.txt","r");
        system ("color E");
        {
            printf("\t\tENTER THE USERNAME \n");
            scanf("%s",username);
            printf("\t\tENTER THE PASSWORD \n");
            j=0;
            while(j<=4)
            {
                password[j]=getch();
                printf("*");
                j++;
            }
            password[j]='\0';
            //     while(fscanf(p,"%s %s",user,pass)!=EOF)
            //   {
            if(strcmp(user,username)==0 && strcmp(pass,password)==0)
            {
                system("cls");
                printf("\t\tWelcome admin\n\n\n");
                count=1;
            }
            //   }
            fclose(p);
            if(count==1)
            {
                printf("\tADMIN which user(Username) information u want right now\n\n");
                scanf("%s",username);
                p=fopen("User record.txt","r+");
                printf("NAME                  NID          LOCATION                                             MONTH(started)     YEAR       \n");
                while(fscanf(p,"%s %s %s %s %s %d",name,nam,&nid,location,month,&year)!=EOF)
                {
                    if( strcmp(nam,username)==0)
                        printf("%s    %s      %s               %s     %d\n\n",name,nid,location,month,year);
                }
                fclose(p);
                p=fopen("User record for bill.txt","r+");
                printf("Username  name               Electricitybill    Gassbill   month      date  year\n");
                while(fscanf(p,"%s %s %f %f %s %d %d",nam,name,&ebill,&gbill,month,&date,&year)!=EOF)
                {
                    if(strcmp(username,nam)==0)
                    {
                        printf("%s    %s     %.2f             %.2f     %s    %d     %d\n\n",nam,name,ebill,gbill,month,date,year);
                    }
                }
                fclose(p);
                char a;
                printf("\t\tDo you want to update or delete the information?(Y/n) \n\n\n");
                scanf("%c",&a);
                while(a=='Y'||a=='y')
                {
                    printf("\t\tEnter the optios \n\n1.Update\n\n2.Delete\n\n");
                    scanf("%d",&j);
                    if(j==1)
                    {

                        p=fopen("User record for bill.txt","r+");
                        printf("\n\t\t\n\n(Don't use space or comma in 'NAME' slot, USE '.' Dot) \n    ");
                        printf("\t your UserName \n");
                        scanf("%s",username);
                        printf("\tENTER the new person Name : %s \n Rename it\n",name);
                        scanf("%s",n);
                        while(fscanf(p,"%s %s %f %f %s %d %d",nam,name,&ebill,&gbill,month,&date,&year)!=EOF)
                        {
                            if(strcmp(username,nam)==0)
                            {
                                fprintf(p,"%s %s %.2f %.2f %s %d %d\n",username,n,ebill,gbill,month,date,year);
                            }
                        }
                        system("color A");
                        {
                            printf("\n\n\tYou 'successfully' change the  your name :\n\n\n");
                        }
                        fclose(p);
                    }
                    else
                    {
                        printf("\t your UserName \n");
                        scanf("%s",username);
                        p=fopen("User record for bill.txt","r+");
                        while(fscanf(p,"%s %s %f %f %s %d %d",nam,name,&ebill,&gbill,month,&date,&year)!=EOF)
                        {
                        }
                    }
                    break;
                }
            }
            else
            {
                system("cls");
                system("color C");
                {
                    printf("\n\n\tDONT try to enter the Admin panel,\n\t IF u failed %d times more!!! \n    system is going to inform the police \n\n ",k);
                    k--;
                    getch();
                }
            }
        }
    }
}

