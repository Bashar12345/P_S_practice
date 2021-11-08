#include<stdio.h>
#include<windows.h>
int main()
{
    int i=0,m,l;
    int n=177;
    while (1)
    {
    while (i<7)
    {
       if (i==1){ system("color a");  system("cls");
       l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
   gotoxy(55,55);
    printf("All the love from Bashar ");

         Sleep(500);}
     else if (i==2){ system("color b"); system("cls");         l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
           gotoxy(55,55);
    printf("All the love from Bashar ");
    Sleep(500);}
      else if (i==3){ system("color c"); system("cls");          l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}Sleep(500);}
      else if (i==4){ system("color d"); system("cls");        l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}     gotoxy(55,55);
    printf("All the love from Bashar ");
    Sleep(500);}
     else if (i==5){ system("color e"); system("cls");         l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
           gotoxy(55,55);
    printf("All the love from Bashar ");Sleep(500);}
     else if (i==6){ system("color f"); system("cls");          l=10; m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(25,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(25,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        gotoxy(45,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(45,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(45,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

         gotoxy(65,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(65,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         gotoxy(85,10);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=11;m=0;
       while(m<2){
        gotoxy(85,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(85,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(85,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}

         l=10;m=0;
         while(m<3){
        gotoxy(105,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(105,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(105,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

        l=21;
         gotoxy(45,10);
        m=0;
       while(m<10){
        gotoxy(45,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
        int o=48;l=21;m=0;
        while(m<10){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}
        m=0;l=21;
       while(m<10){
        gotoxy(58,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

              gotoxy(65,21);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=22; m=0;
       while(m<3){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<4){
        gotoxy(65,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(65,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

         l=21;
         gotoxy(85,l);
        m=0;
       while(m<10){
        gotoxy(85,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}
         o=93; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o++;}

        o=92; l=26; m=0;
        while(m<5){
        gotoxy(o,l);
        printf("%c",n);
        l++;m++;o--;}

        m=0;l=21;
       while(m<10){
        gotoxy(98,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}

        l=34;m=0;
         while(m<3){
        gotoxy(30,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(30,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
        l++;m=0;
        while(m<3){
        gotoxy(30,l);
        printf("       %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}


        gotoxy(50,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35; m=0;
       while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
        gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++; m=0;
        while(m<2){
        gotoxy(50,l);
        printf("%c%c%c%c          ",n,n,n,n);
        l++;m++;}
         gotoxy(50,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);

          gotoxy(70,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<2){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}
        gotoxy(70,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
          l++;m=0;
        while(m<3){
        gotoxy(70,l);
        printf("%c%c%c%c          %c%c%c%c",n,n,n,n,n,n,n,n);
        l++;m++;}

          gotoxy(90,34);
       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
         l=35;m=0;
       while(m<1){
        gotoxy(90,l);
        printf("%c%c%c          %c%c%c",n,n,n,n,n,n);
        l++;m++;}
        gotoxy(90,l);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",n,n,n,n,n,n,n,n,n,n,n,n,n,n,n,n);
       o=94; l=37; m=0;
        while(m<4){
        gotoxy(o,l);
        printf("%c%c%c",n,n,n);
        l++;m++;o=o+3;}
                 l=36; m=0;
       while(m<5){
        gotoxy(90,l);
        printf("%c%c%c",n,n,n);
        l++;m++;}Sleep(500);}
          gotoxy(55,55);
    printf("All the love from Bashar ");
i++;
    }



    i=0;
}
}



void gotoxy (int x, int y)
{
    COORD coord={0,0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
