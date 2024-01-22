#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'-1+i);
        }
        printf("\n");
    }
}
