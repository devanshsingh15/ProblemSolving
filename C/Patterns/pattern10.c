#include<stdio.h>
main()
{
    int rows,i,j;
    printf("enter no. of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<i;j++)
        {
            print("* ");
        }
        printf("\n");
    }
}
