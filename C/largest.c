#include<stdio.h>
main()
{
    int a,b,c,max1,max2;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("a is largest");
        }
    }
    else if(b>c)
    {
        if(c>a)
        {
            printf("b is largest");
        }
    }
    else
    {
        printf("c is largest");
    }
}
