#include<stdio.h>
main()
{
    int i,j,row;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
