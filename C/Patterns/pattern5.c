#include<stdio.h>
main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%c",'E'+1-j);
        }
        printf("\n");
    }
}

