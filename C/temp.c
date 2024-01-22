#include<stdio.h>
main()
{
    int temp;
    printf("enter temperature in centigrade");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Freezing Weather");
    }
    else if(temp>=0 && temp<10)
    {
        printf("Very Cold Weather");
    }
    else if(temp>=10 && temp<20)
    {
        printf("cold weather");
    }
    else if(temp>=20 && temp<30)
    {
        printf("normal in temperature");
    }
    else if(temp>=30 && temp<40)
    {
        printf("hot");
    }
    else
    {
        printf("very hot");
    }
}
