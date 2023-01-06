#include<stdio.h>
int main()
{
    char a[100];
    int i,count1=0,count2=0,count3=0;
    printf("Enter a string:\n");
    scanf("%s",a);
    for(i=0;a[i]!= '\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            count1++;
        }
        else if((a[i]>=32&&a[i]<=47)||(a[i]>=58&&a[i]<=64)||(a[i]>=91&&a[i]<=96)||(a[i]>=123&&a[i]<=126))
        {
            count2++;
        }
        else if(a[i]>=48&&a[i]<=57)
        {
            count3++;
        }
    }
    printf("Number of alphabets: %d\n",count1);
    printf("Number of special characters: %d\n",count2);
    printf("Number of digits: %d\n",count3);
    return 0;
}
