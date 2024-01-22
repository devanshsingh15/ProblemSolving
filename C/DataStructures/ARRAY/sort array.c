#include<stdio.h>
main()
{
    int a[10],i,n,t;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

