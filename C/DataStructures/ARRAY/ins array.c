#include<stdio.h>
main()
{
    int a[10],i,e,p,n;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element and position");
    scanf("%d%d",&e,&p);
    for(i=n;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=e;
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
