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
    if(n==p){
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<p;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
}
