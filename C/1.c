#include<stdio.h>
main()
{
    int i,j,n,fact=1,s=0;
    printf("enter n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        fact=1;
        for(i=j;i>0;i--)
            {
                fact=fact*i;
            }
        s=s+fact;
    }
    printf("%d",s);
}
