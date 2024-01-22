#include<stdio.h>
main()
{
    int a[10],i,n,ele;
    printf("enter n");
    scanf("%d",&n);
    printf("enter a");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("element found at %d position",i);
        }
    }
}
