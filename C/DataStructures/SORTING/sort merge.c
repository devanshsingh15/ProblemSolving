#include <stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,n,m,k=0,t;
    printf("enter no of elements of first array:");
    scanf("%d", &n);
    printf("Enter elements of first array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);}
    printf("enter no  of elements of second array:");
    scanf("%d", &m);
    printf("Enter eleme nts of second array:\n");
    for ( j = 0; j < m; j++){
        scanf("%d",&b[j]);}
    i=0,j=0;
    while (i<n && j<m){
        if(a[i]<= b[j]){
            c[k] = a[i];
            i++,k++;}
        else{
            c[k] = b[j];
            j++,k++;}}
    if(i>=n){
        while(k<(n+m) && j<m){
            c[k] = b[j];
            j++,k++;}}
    else{
        while (k<(n+m) && i<n){
            c[k] = a[i];
            i++,k++;}}
    printf("New array is:\n");
    for (t = 0; t < k; t++){
        printf("%d\n",c[t]);}
}
