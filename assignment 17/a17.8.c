#include<stdio.h>
int main()
{
    int i=0;
    char name[100];
    char a[100];
    printf("Enter string:\n");
     scanf("%s",name);
     while(name[i] != '\0')
     {
         a[i]=name[i];
         i++;
     }
     printf("Copied string is %s",a);
     return 0;
}

