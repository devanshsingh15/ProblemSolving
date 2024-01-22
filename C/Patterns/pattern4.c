#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the no of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(k+64));
        }
         printf("\n");
    }
}
