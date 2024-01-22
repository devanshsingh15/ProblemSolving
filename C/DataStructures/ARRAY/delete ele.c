#include<stdio.h>
main()
{
    int a[10],n,i,ele,j;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be deleted");
    scanf("%d",&ele);

    for(i=0;i<n;i++)
    {
         if(a[i]==ele)
         {
            for(j=i;j<n;j++)
            {
                 a[j]=a[j+1];
            }
         }

    }

    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}
