#include<stdio.h>
int main()
{
    int i,count=0;
    char name[100];
    char a[100];
    printf("Enter uppercase string:\n");
     scanf("%s",name);
    for(i=0;name[i] != '\0';i++)
    {
        if(name[i]>='A'&&name[i]<='Z')
        {
            a[i]=name[i]+32;
        }
    }
    a[i]='\0';
    printf("New string is %s",a);
    return 0;
}

