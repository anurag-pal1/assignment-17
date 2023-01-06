#include<stdio.h>
int main()
{
    char a[100];
    int hash[200]={0};
    int i;
    printf("Enter a string:\n");
    scanf("%s",a);
    for(i=0;a[i] != '\0';i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<123;i++)
    {
        if(hash[i]>0)
        {
            printf("%c --> %d\n",i,hash[i]);
        }
    }
    return 0;
}

