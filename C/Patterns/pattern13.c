#include<stdio.h>
int func(int N);
main()
{
    int N,z;
    printf("enter N");
    scanf("%d",&N);
    z=func(N);


}
int func(int N)
{
    if(N>0)
    {
        printf("%d ",N);
        func(N-5);
    }
    printf("%d ",N);

}
