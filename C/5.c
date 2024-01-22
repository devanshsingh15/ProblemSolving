#include<stdio.h>
#include<math.h>
main()
{
    int i,j,n;
    float sum=1,x,fact=1;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=i;j>0;j--)
        {
            fact=fact*j;
        }
        sum=sum+pow(-x,2*i+1)/fact;
    }
    printf("%f",sum);
}
