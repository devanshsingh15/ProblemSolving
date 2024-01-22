#include<stdio.h>
main()
{
    int a[10][10],m,n,i,j,t,k,temp;
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

    //reverse
    for(i=0;i<4;i++)
    {
        k=3;
        for(j=0;j<4/2;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            k--;
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

