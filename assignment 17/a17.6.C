#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j;
    char name[100];
    char a[100];
    printf("Enter string:\n");
     scanf("%s",name);
     j=strlen(name)-1;
     while(name[i] != '\0')
     {
         a[i]=name[j];
         j--;
         i++;
     }
     printf("Reversed string is %s",a);
     return 0;
}
