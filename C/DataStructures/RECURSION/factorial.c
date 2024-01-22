#include<stdio.h>
int fact(int n);
main()
{
    int n,z;
    printf("enter n");
    scanf("%d",&n);
    z=fact(n);
    printf("%d",z);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }
}
