#include<stdio.h>
main()
{
    int a[10][10],m,n,i,j,t;
    printf("enter order of a");
    scanf("%d%d",&m,&n);
    printf("enter elements of a");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i;j<n;j++)
        {
            t=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=t;
        }
    }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

}
