#include<stdio.h>
main()
{
    int a[10][10],b[10][10],m,n,i,j;
    printf("enter order of a");
    scanf("%d%d",&m,&n);

    printf("enter matrix a");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                b[i][j]=a[j][i];
                printf("%d  ",b[i][j]);

            }
            printf("\n");
        }
}

