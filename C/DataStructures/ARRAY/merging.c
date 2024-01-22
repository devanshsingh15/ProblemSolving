#include<stdio.h>
main()
{
    int a[10],b[10],c[20],i,j,n,m;
    printf("enter order of a and b");
    scanf("%d%d",&m,&n);
    printf("enter elements of a");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of b");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n;j++)
    {
        c[m+j]=b[j];
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d",c[i]);
    }
}
