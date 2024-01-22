#include<stdio.h>
main()
{
    int i,space,rows,k=0,c=0,c1=0;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
            c++;
        }
        while(k!=2*i-1)
        {
            if(c<=rows-1)
            {
                printf("%d",i+k);
                c++;
            }
            else
            {
                c1++;
                printf("%d",(i+k-2*c1));
            }
            k++;
        }
        c=c1=k=0;
        printf("\n");
    }
}

