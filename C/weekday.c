#include<stdio.h>
main()
{
    int f,date,year,month;
    printf("enter date");
    scanf("%d",&date);
    printf("enter month");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);
    if(month==1 || month==2)
    {
        year--;
        month=month+12;
    }
    f=date+2*month+(3*(month+1)/5)+year+(year/4)-(year/100)+(year/400)+2;
    if(f%7==0)
        printf("saturday");
    else if(f%7==1)
        printf("sunday");
    else if(f%7==2)
        printf("monday");
    else if(f%7==3)
        printf("tuesday");
    else if(f%7==4)
        printf("wednesday");
    else if(f%7==5)
        printf("thursday");
    else if(f%7==6)
        printf("friday");
}
