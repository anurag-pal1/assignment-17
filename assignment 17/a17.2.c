#include<stdio.h>
int main()
{
    int i,count=0;
    char name[100];
    char n;
    printf("Enter string:\n");
    fgets(name,100,stdin);
    printf("Enter the character:\n ");
    scanf("%c",&n);
    for(i=0;name[i] != 0;i++)
    {
        if(name[i]==n)
        {
            count++;
        }
    }
    printf("%d times character %c present in the given string.",count,n);
    return 0;
}
