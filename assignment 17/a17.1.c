#include<stdio.h>
int main()
{
    int i,length=0;
    char name[100];
    printf("Enter string:\n");
    scanf("%s",name);
    for(i=0;name[i] != '\0';i++)
    {
        length++;
    }
    printf("Length of given string is %d",length);
    return 0;
}
