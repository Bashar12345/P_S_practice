#include<stdio.h>
#include<string.h>

int main(void)
{
    int lines,i,c;
    char sentence[1000];
    printf("How many lines you want to check????");
    scanf("%d",&lines);
    int a[lines];
    for (i=0; i < lines; i++)
    {
        printf("Enter the sentences One by one");
      gets(sentence);
        char *word=strtok(sentence, " ");
        c=0;
        while(word!=NULL)
        {
            word = strtok(NULL, " ");
            c++;
        }
        a[i]= c;
    }
    for (i=0; i < lines; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

