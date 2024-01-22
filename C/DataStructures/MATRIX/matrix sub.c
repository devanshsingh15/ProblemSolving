#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("enter order of a");
    scanf("%d%d",&m,&n);
    printf("enter order of b");
    scanf("%d%d",&p,&q);
    printf("enter matrix a");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix b");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(m==p && n==q){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                c[i][j]=a[i][j]-b[i][j];
                printf("%d  ",c[i][j]);

            }
            printf("\n");
        }
    }
}

