#include<stdio.h>
main()
{
    float allow,totalsalary;
    char grade;
    float hra,basic,pf,da;
    printf("enter basic salary");
    scanf("%f",&basic);
    printf("enter grade");
    scanf("%s",&grade);
    if(grade='A')
    {
        allow=1700;
    }
    else if(grade='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    hra=0.2*basic;
    pf=0.11*basic;
    da=0.5*basic;
    totalsalary=basic+hra+da+allow-pf;
    printf("%d",totalsalary);
}
