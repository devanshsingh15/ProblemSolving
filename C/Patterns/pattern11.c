#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=2*(n-i);j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}

