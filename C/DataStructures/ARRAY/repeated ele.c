#include<stdio.h>
void main()
{
    int a[10],i,j,n;
    printf("enter n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                printf("repeated element=%d \n",a[i]);
            }
        }
    }
}
