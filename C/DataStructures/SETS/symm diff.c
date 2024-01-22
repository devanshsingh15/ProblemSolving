#include<stdio.h>
main()
{
    int a[10],b[10],c[20],i,j,n,m,z;
    printf("enter order of a and b");
    scanf("%d%d",&m,&n);
    printf("enter elements of a");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements of b");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        z=0;
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                z++;
            }
        }
        if(z==0){
            printf("%d",a[i]);
        }
    }
    for(i=0;i<n;i++){
        z=0;
        for(j=0;j<m;j++){
            if(b[i]==a[j]){
                z++;
            }
        }
        if(z==0){
            printf("%d",b[i]);
        }
    }
}
