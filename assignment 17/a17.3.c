#include<stdio.h>
int main()
{
    int i,count=0;
    char name[100];
    printf("Enter string:\n");
     scanf("%s",name);
    for(i=0;name[i] != '\0'; i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
         {
                     count++;
         }
    }
    printf("Numbers of vowels in given string is %d",count);
    return 0;
}
