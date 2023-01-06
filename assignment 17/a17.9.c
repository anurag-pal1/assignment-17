#include<stdio.h>
#include<string.h>
int main()
{
    int i,min,j,l;
    char a[100];
    printf("Enter string:\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=1;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(a[j]>a[j+1])
            {
                min=a[j];
                a[j]=a[j+1];
                a[j+1]=min;
            }
        }
    }
    printf("\n%s",a);
    return 0;
}
