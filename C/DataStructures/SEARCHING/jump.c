#include<stdio.h>
#include<math.h>
int min(int a,int b){
    if(b>a)
      return a;
    else
      return b;
}
int jumpsearch(int a[],int ele,int n)
{
    int step,prev;
    step=sqrt(n);
    prev=0;
    while (a[min(step,n)-1]<ele)
    {
        prev=step;
        step+=sqrt(n);
        if (prev>=n)
            return -1;
    }
    while (a[prev]<ele)
    {
        prev++;
        if (prev==min(step,n))
            return -1;
    }
    if (a[prev]==ele)
        return prev;
    return -1;
}
int main()
{
    int a[20],m,ele,n,index,i;
    print("enter no. of elements");
    scanf("%d",&m);
    printf("enter elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched");
    scanf("%d",&ele);
    n=sizeof(a)/sizeof(a[0]);
    index=jumpsearch(a,ele,n);
    if(index>=0)
    printf("Number is at %d index",index);
    else
    printf("Number is not exist in the array");
    return 0;
}
