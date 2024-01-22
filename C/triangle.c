#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isosceles");
    }
    else if(a!=b && b!=c && a!=c)
    {
        printf("scalene");
    }
}
