#include<stdio.h>
#include<string.h>
main()
{
    char str[20];
    int n,i,j,k;
    printf("enter string:");
    scanf("%s",&str);
    n=strlen(str);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=(i-1);k<=n;k++)
        {
            printf("%c",str[k]);
        }
        printf("\n");
    }
}
