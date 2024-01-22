#include<stdio.h>
void main()
{
    int a[10],i,j,n,t;
    printf("enter n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
