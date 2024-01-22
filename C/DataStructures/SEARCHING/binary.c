#include<stdio.h>
main()
{
    int a[10],i,n,ele,start,end,mid;
    printf("enter n");
    scanf("%d",&n);
    printf("enter a");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&ele);
    start=0;
    end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]<ele){
            start=mid+1;
        }
        else if(a[mid]==ele){
            printf("%d found at location %d",ele,mid+1);
            break;
        }
        else{
            end=mid-1;
        }
    }
    if(start>end){
        printf("not found!");
    }
}
