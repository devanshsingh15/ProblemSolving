#include<stdio.h>
void main()
{
    int a[10],i,n,t,s=0,z;
    printf("enter n");
    scanf("%d",&n);

    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=(n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("missing=%d",z-s);
}
