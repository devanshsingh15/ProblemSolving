#include<stdio.h>
main()
{
    int i,n,a[10],b[10],c[20],j,m,k=0;
    printf("enter order of a and b");
    scanf("%d%d",&m,&n);
    printf("enter a");
    for (i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter b");
    for (j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
        }
    }
    printf("intersection of both set is\n");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }
}
