#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        printf("\t\t\tBILLpaid.com\n\n");
        printf("\t\t 'Welcome to our website'\n\n\tOur website helps u to pay bills\n\n    NOTE: please check the billrecord after the billentry \n");
        printf("\n\tPlease browse any option:\n\n\t (Press the frist letter)  \n\n\t'A'dmin: \n\n \t'R'egistration: \n\n \t'L'ogin: \n\n \t'F'orget password: \n\n \t'T'otal payment list of month: \n\n \t'E'xit: \n\n");
        int b=getchar();
        if( b=='A'||b=='a')
        {
            system("cls");
            admin();
        }
        else if(b=='r'||b=='R')
        {
            system("cls");
            registration();
        }
        else if(b=='l'||b=='L')
        {
            system("cls");
            login();
            system("color D");
        }
        else if(b=='f'||b=='F')
        {
            system("cls");
            search();
        }
        else if(b=='t'||b=='T')
        {
            system("cls");
            totallist();
        }
        else if(b=='e'||b=='E')
            exit(0);
        else
            printf("\n\n\t\t\t\t!!!!!!!!wrong choice!!!!!!!\n\n\n");
        system("cls");
    }
}
int admin()
{
    float ebill,gbill;
    char username[20],password[10],user[20],pass[10];
    char month[10],location[100],name[50],change[50],nam[50],n[50];
    int year,nid,i,j,k=2,count=0,date,dat;
    FILE *p;
    p=fopen("Admin record.txt","a");
    fclose(p);
    for(i=0; i<3; i++)
    {
        p=fopen("Admin record.txt","r");
        system ("color E");
        {
            printf("\t\tENTER THE USERNAME \n");
            scanf("%s",username);
            printf("\t\tENTER THE PASSWORD \n");
            j=0;
            while(j<=9)
            {
                password[j]=getch();
                printf("*");
                j++;
            }
            password[j]='\0';
        }
        while(fscanf(p,"%s %s",user,pass)!=EOF)
        {
            if(strcmp(user,username)==0 && strcmp(pass,password)==0)
            {
                system("cls");
                printf("\t\tWelcome admin\n\n\n");
                count=1;
            }
        }
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


int registration()
{
    int a='y';
    printf("\t\t\tREGISTRATION\n");
    char username[20],password[10],user[20],pass[10];
    int count=0;
    while(a=='Y'||a=='y')
    {
        FILE * p;
        p=fopen("Registration record.txt","r+");
        system ("color b");
        {
            printf("\t\tENTER THE USERNAME AND PASSWORD \n");
            scanf("%s %s",username,password);
        }
        while(fscanf(p,"%s %s",user,pass)!=EOF)
        {
            if(strcmp(user,username)==0 && strcmp(pass,password)==0)
            {
                system ("cls");
                system ("color c");
                {
                    printf("\t\t 'Alredy registered'\n\n\n\n");
                }
                printf("\tDO you want to REGISTER (Y/n)\n\n   ");
                a=getch();
                system ("cls");
                count=1;
            }

        }
        fclose(p);
        if (count==0)
        {
            char month[10],location[70],username[25],name[50];
            int year,nid;
            p=fopen("Registration record.txt","a");
            fprintf(p,"%s %s\n",username,password);
            fclose(p);
            p=fopen("User record.txt","a");
            printf("\t\t'You ARE a new Member of our family'\n\tEnter your name:(Don't use space or comma, USE '.' Dot) \n    ");
            scanf("%s",name);
            //gets(name);
            printf("\tEnter the Username  \n");
            scanf("%s",username);
            printf("Your nation id number\n  ");
            scanf("%d",&nid);
            printf("\tEnter the location, NOTE(house number, village, post office, Zilla, district, zip code)\n");
            printf("\tNote:(Don't use space or comma, USE '.' Dot) \n    ");
            scanf("%s",location);
            //gets(location);
            printf("\t\tEnter your entry month(january) and year(2017)\n  ");
            scanf("%s %d",month,&year);
            fprintf(p,"%s %s %d %s %s %d\n",name,username,nid,location,month,year);
            fclose(p);
            p=fopen("Registration login record.txt","a");
            printf("\tEnter the bill pay pin number:\n\n");
            scanf("%s",password);
            fprintf(p,"%s %s\n",username,password);
            fclose(p);

            system("color A");
            {
                system("cls");
                printf("\n\n\n\n\n\tYou successfully registered \n\n\n\n\n\n");
                getchar();
            }
        }
        break;
    }
}

int login()
{
    char name[20],word[10],nam[20],pass[10],month[10];
    int date,year,count=0,c;
    FILE *p;
    p=fopen("Registration record.txt","r+");
    printf(" \tENTER THE USERNAME  & PASSWORD :\n");
    scanf("%s %s",name,word);
    while(fscanf(p,"%s %s",nam,pass)!=EOF)
    {
        if(strcmp(name,nam)==0 && strcmp(word,pass)==0)
        {
            printf("\n\t'Welcome to your account'\n\n");
            count++;
        }
    }
    if(count==1)
    {
        printf("\t What do you want?? choose\n");
        printf("\t 1.BiLL Count \n\n\t 2.Pay your BiLLs \n\n\t 3.BiLL Record \n\n\t 4.EXIT\n\n\n");
        scanf("%d",&c);
        if(c==1)
        {
            system("cls");
            billcounter();
        }
        else if(c==2)
        {
            system("cls");
            billentry();
        }
        else if(c==3)
        {
            system("cls");
            billrecord();
        }
        else if(c==4)
        {
            system("cls");
            main();
        }
        else
            printf("\t\tWrong choose!!!!!!!!!!!!!!\n\n\n");

    }
    else
    {
        system("color C");
        {
            printf("\n\n\t'WRONG' Username & password!!!!!!!!!!\n\n\n\t If you are not REGISTERED please register frist\n\n\n");
            getch();
        }

    }
}
int billentry()
{
    char name[20],username[50],word[5],nam[20],pass[10],month[10];
    int n=0,date,year,count=0,c;
    float ebill,gbill;

    printf(" \tENTER THE USERNAME \n");
    scanf("%s",name);
    printf(" \tENTER THE PIN \n ");
    while(n<4)
    {
        word[n]=getch();
        printf("*");
        n++;
    }
    word[n]='\0';
    FILE *p;
    p=fopen("Registration login record.txt","r+");
    while(fscanf(p,"%s %s",nam,pass)!=EOF)
    {
        if(strcmp(name,nam)==0 && strcmp(word,pass)==0)
        {
            printf("\n\n\t'Welcome to Billpayed.com Bill entery'\n");
            count++;
        }
    }
    fclose(p);
    if(count==1)
    {
        p=fopen("User record for bill.txt","a");
        printf("\n\t\tFrist U have to enter this month bill\n\n(Don't use space or comma in 'NAME' slot, USE '.' Dot) \n    ");
        printf("\tENTER your UserName  \n");
        scanf("%s",username);
        printf("\tENTER your Name  \n");
        scanf("%s",name);
        printf("\tENTER your Electricity BILL \n");
        scanf("%f",&ebill);
        printf("\tENTER your GASS BILL \n");
        scanf("%f",&gbill);
        printf("\tENTER the  MONTH(january)\n");
        scanf("%s",month);
        printf("\tENTER DATE(01) \n");
        scanf("%d",&date);
        printf("\tENTER YEAR(2017) \n");
        scanf("%d",&year);
        fprintf(p,"%s %s %.2f %.2f %s %d %d\n",username,name,ebill,gbill,month,date,year);
        system("color A");
        {
            printf("\n\n\tYou 'successfully' paid your bill:\n\n\n");
            getch();
        }
        fclose(p);
    }
    else
    {
        system("color C");
        printf("Enter your username and pin number correctly!!\n\n\n");
        getche();
    }

}
int billrecord()
{
    char username[20],name[50],word[10],nam[50],pass[10],month[10];
    int date,year,count;
    float ebill,gbill;
    printf("\n\n\t\t'Welcome to billpayed.com'\n\n\tYour paid bill record \n\n");
    FILE *p;
    p=fopen("User record for bill.txt","r");
    printf(" \tENTER THE Name(not username)\n\n'Don't use space or comma in 'NAME' slot, USE '.' Dot' \n");
    scanf("%s",username);
    printf("Username  name               Electricitybill    Gassbill   month      date  year\n");
    while(fscanf(p,"%s %s %f %f %s %d %d",nam,name,&ebill,&gbill,month,&date,&year)!=EOF)
    {
        if(strcmp(username,name)==0)
        {
            printf("%s    %s     %.2f             %.2f     %s    %d      %d\n",nam,name,ebill,gbill,month,date,year);
        }
    }
    fclose(p);
    getch();
}
int billcounter()
{
    int a;
    while(1)
    {
        printf("\t\t'What do you want'\n\n\t1. Electricity bill count\n\n\t2. GASS bill count\n\n\t3. Total bill(calculator)\n\n\t4. EXIT\n\n\n   ");
        scanf("%d",&a);
        if(a==1)
        {
            system("cls");
            electricity();
        }
        else if(a==2)
        {
            system("cls");
            gass();
        }
        else if(a==3)
        {
            system("cls");
            calculator();
        }
        else if(a==4)
        {
            system("cls");
            login();
        }
        else
        {
            printf("\t\t\tWrong choose!!!!!!!\n\n\n");
        }
    }
}
int electricity()
{
    int a;
    printf("\t\tWhat  type of user YOU are? choose\n\t1. Residencial\n\t2. Small industries\n\t3. Commercial Office\n\t4. EXIT\n\n");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        Residencial();
    }
    else if(a==2)
    {
        system("cls");
        industries();
    }
    else if(a==3)
    {
        system("cls");
        office();
    }
    else if(a==4)
    {
        system("cls");
        billcounter();
    }
    else
        printf("\t\tWrong choose!!!!!!!!!!!!!!\n\n\n");
}
int calculator()
{
    float a,b,total;
    int c;
    while(1)
    {
        printf ("Last total amount = %.2f tk\n\n\n\n",total);
        printf("\t 'Calculator'\n\n\t\t1.Add\n\t\t2.Substract\n\t\t3.Multiply\n\t\t4.Divide\n\t\t5.Exit\n\n");
        scanf("%d",&c);
        if(c==1)
        {
            printf(" Enter the value \n");
            scanf("%f",&a);
            printf("Enter the nother value \n");
            scanf("%f",&b);
            float sum=a+b;
            total=sum;
            printf("\t\t Total = %.2f \n\n",sum);
        }
        else if(c==2)
        {
            printf(" Enter the value \n");
            scanf("%f",&a);
            printf("Enter the nother value \n");
            scanf("%f",&b);
            float sub=a-b;
            printf("\t\t Total = %.2f \n\n",sub);
            total=sub;
        }
        else if(c==3)
        {
            printf(" Enter the value \n");
            scanf("%f",&a);
            printf("Enter the nother value \n");
            scanf("%f",&b);
            float mul=a*b;
            printf("\t\t Total = %.2f \n\n",mul);
            total=mul;
        }
        else if(c==4)
        {
            printf(" Enter the value \n");
            scanf("%f",&a);
            printf("Enter the nother value \n");
            scanf("%f",&b);
            float div=a/b;
            printf("\t\t Total = %.2f \n\n",div);
            total=div;
        }
        else if(c==5)
        {
            exit(0);

        }
        else
            printf("\t\tWrong choose!!!!!!!!!!!!!!\n\n\n");

    }
}
int gass()
{
    system("color d");
    {
        printf("\t\t\t'Gass counter\n\n");
        int a,unit;
        float taka,vat;
        printf("\tENTER the user type \n\n\t1.Industries \n\n\t2.Commercial \n\n\t3.CNG \n\n\t4.Local Housing\n\n");
        scanf("%d",&a);
        printf("\tEnter how many 'cube meter' you have used\n");
        scanf("%d",&unit);
        if(a==1)
        {
            printf("\t 'Industries' rate per cube meter = 6.74\n\n");
            taka=6.74;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n\n",vat);
            printf("\tYour used cube meter %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n\n",unit,taka+vat);
        }
        else if(a==2)
        {
            printf("\t 'Commercial' rate per cube meter = 8.45\n\n");
            taka=11.36;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n\n",vat);
            printf("\tYour used cubemeter %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n\n",unit,taka+vat);
        }
        else if(a==3)
        {
            printf("\t'CNG' rate per cubemeter = 35.00\n\n");
            taka=35.00;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n\n",vat);
            printf("\tYour used cubemeter %d & You have to pay with 5 percent vat \n\t\tTotal %.2f tk \n\n\n",unit,taka+vat);
        }
        else if(a==4)
        {
            printf("\tHow many Burnner u use in your house???\n\n\n  \t 'ONE' burnner 600tk \n\t 'TWO' burnner 650tk \n\n");
            printf("IF u have more then three burnner ,then THen U have to pay in cubemeter\n\n");

            printf("\t 'Three bunrner' rate per cube meter = 7.00\n\n");
            taka=7.00;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n\n",vat);
            printf("\tYour used cubemeter %d and You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n\n",unit,taka+vat);

        }
        else
        {
            printf("\t'Thank you' for browsing");
        }
    }
}
int Residencial()
{
    printf("\t\t\t RESIDENSIAL \n");
    int unit;
    float taka,vat;
    printf("\tEnter the amount of unit: ");
    scanf("%d",&unit);
    if(unit<50)
    {
        taka=3.33;
        printf("\tYou have to pay per unit %.2f \n",taka);
        taka=unit*taka; // vat=(taka*5)/100;
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka);
    }
    else if(unit>=50 && unit<=75)
    {
        taka=3.80;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else if(unit>=76 && unit<=200)
    {
        taka=5.14;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else if(unit>=201&&unit<=300)
    {
        taka=5.36;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else if(unit>=301&&unit<=400)
    {
        taka=5.63;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else if(unit>=401&&unit<600)
    {
        taka=8.70;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else if(unit>=600)
    {
        taka=9.98;
        printf("\tYou have to pay per unit %.2f \n\t\t\tVAT 5 percent\n",taka);
        taka=unit*taka;
        vat=(taka*5)/100;
        printf(" \t\tVAT %.2ftk\n",vat);
        printf("\tYou used %d unit & your electricty bill %.2ftk\n\n",unit,taka+vat);
    }
    else
        printf("thank YOU for the browsing");
}

int office()
{
    system("color d");
    {
        printf("\t\t'COMMERCIAL & OFFICE'\n");
        int a,unit;
        float taka,vat;
        printf("\tENTER the user type \n\t1.Flat rate \n\t2.Off-Peak time\n\t3.Peak time\n");
        scanf("%d",&a);
        printf("\tEnter how many units you have used\n");
        scanf("%d",&unit);
        if(a==1)
        {
            printf("\tFLat rate per unit = 9.80\n");
            taka=9.80;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n ",unit,taka+vat);
        }
        else if(a==2)
        {
            printf("\t'off-Peak time' rate per unit = 8.45\n");
            taka=8.45;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n ",unit,taka+vat);
        }
        else if(a==3)
        {
            printf("\t'Peak time' rate per unit = 11.98\n");
            taka=11.98;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n ",unit,taka+vat);
        }
        else
        {
            printf("\t'Thank you' for browsing");
        }
    }
}


int industries()
{
    system("color a");
    {
        printf("\t\t\t'SMALL INDUSTRIES'\n");
        int a,unit;
        float taka,vat;
        printf("\tENTER the user type \n\t1.Flat rate \n\t2.Off-Peak time\n\t3.Peak time\n");
        scanf("%d",&a);
        printf("\tEnter how many units you have used\n");
        scanf("%d",&unit);
        if(a==1)
        {
            printf("\tFLat rate per unit = 7.66\n");
            taka=7.66;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n",unit,taka+vat);
        }
        else if(a==2)
        {
            printf("\t'off-Peak time' rate per unit = 6.90\n");
            taka=6.90;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n",unit,taka+vat);
        }
        else if(a==3)
        {
            printf("\t'Peak time' rate per unit = 9.24\n");
            taka=9.24;
            taka=unit*taka;
            vat=(taka*5)/100;
            printf(" \t\tVAT %.2ftk\n",vat);
            printf("\tYour used units %d & You have to pay with 5 percent vat \n\tTotal %.2f tk \n\n",unit,taka+vat);
        }
        else
        {
            printf("\t'Thank you' for browsing");
        }
    }
}
search()
{
    char name[20],word[10],nam[20],pass[10];
    int count=0;
    FILE *p;
    p=fopen("Registration record.txt","r+");
    printf("\t Enter The 'USERNAME ' \n");
    scanf("%s",name);
    printf("\t Enter frist letter of your password \n\n");
    scanf("%s",word);
    while(fscanf(p,"%s %s",nam,pass)!=EOF)
    {
        if(strcmp(name,nam)==0)
        {
            printf(" \tYour searching ID: %s \n \tPASSWORD : %s ",nam,pass);
            count++;
        }
    }
    fclose(p);
    if(count==0)
        printf(" \tThere are no  ' %s ' ID in  BILLpaid.com ",name);
    getch();
}
int totallist()
{
    float ebill,gbill,total=0,internet,dish,emi,food,paper,londri,medical,vehicle,education,insurance,others;
    char username[20],password[10],user[20],pass[10];
    char month[10],location[100],name[50],change[50],nam[50],n[50];
    int year,nid,i,j,k=2,count=0,date,dat;
    FILE *p;
    printf("\n\t\tChoose your options! \n\n\t1.Browse \n\n\t2.Check the Spends\n\n\t3.exit\n\n");
    scanf("%d",&i);
    if(i==1)
    {
        p=fopen("total list.txt","a");
        printf("\tENTER your UserName  \n");
        scanf("%s",username);
        printf("\tENTER the  MONTH(january)\n");
        scanf("%s",month);
        printf("\tENTER YEAR(2017) \n");
        scanf("%d",&year);
        printf("\tENTER your Electricity BILL \n");
        scanf("%f",&ebill);
        printf("\tENTER your GASS BILL \n");
        scanf("%f",&gbill);
        printf("\tENTER your Internet  BiLL \n");
        scanf("%f",&internet);
        printf("\tENTER your Dish TV BiLL \n");
        scanf("%f",&dish);
        printf("\tENTER your EMI BiLL(if you dont have any EMI then enter '0' )\n");
        scanf("%f",&emi);
        printf("\tENTER your monthly total food  BiLL \n");
        scanf("%f",&food);
        printf("\tENTER your PAPER BILL \n");
        scanf("%f",&paper);
        printf("\tENTER your londri BILL \n");
        scanf("%f",&londri);
        printf("\tENTER your Medical Spences \n");
        scanf("%f",&medical);
        printf("\tENTER your vehicles costs \n");
        scanf("%f",&vehicle);
        printf("\tENTER your Educational  expences \n");
        scanf("%f",&education);
        printf("\tENTER your Insurance BILL \n");
        scanf("%f",&insurance);
        printf("\tENTER your Others BILL \n");
        scanf("%f",&others);
        total=ebill+gbill+internet+dish+emi+food+paper+londri+medical+vehicle+education+insurance+others;
        printf("\t\t Total spends in this month %.2f",total);
        fprintf(p,"%s %s %d %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",username,month,year,ebill,gbill,internet,dish,emi,food,paper,londri,medical,vehicle,education,insurance,others,total);
        system("color A");
        {
            printf("\n\n\tYou 'successfully' recored your bills:\n\n\n");
            getch();
        }
        fclose(p);

    }
    else if(i==2)
    {
        FILE *p;
        p=fopen("total list.txt","r");
        printf("\tENTER your UserName  \n");
        scanf("%s",username);
        printf("Username   Month  Year Electricitybill Gassbill internet dish TV emi Food expences Paper Londri Medical Vehicle Education Insurance Others Total\n");
        while(fscanf(p,"%s %s %d %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",nam,month,year,ebill,gbill,internet,dish,emi,food,paper,londri,medical,vehicle,education,insurance,others,total)!=EOF)
        {
            if(strcmp(username,nam)==0)
            {
                printf("%s     %s    %d        %.2f      %.2f     %.2f      %.2f      %.2f      %.2f      %.2f      %.2f     %.2f     %.2f     %.2f     %.2f      %.2f      %.2f\n",username,month,year,ebill,gbill,internet,dish,emi,food,paper,londri,medical,vehicle,education,insurance,others,total);
            }
        }
    }
    else if(i==3)
    {
        exit(0);
        main();
    }
    else
    {
        printf("\t!!!!!!!!!!!Wrong Choise!!!!!!!!!!\n\n");
    }
}












