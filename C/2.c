#include<stdio.h>
#include<math.h>
main()
{
    int i, j,n,fact=1,s=0,x;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=i;j>0;j--)
            {
                fact=fact*j;
            }
        s=s+pow(x,i)/fact;
    }
    printf("%d",s);
}

