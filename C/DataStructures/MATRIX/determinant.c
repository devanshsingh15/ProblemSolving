#include <stdio.h>
#include <math.h>
int determinatmat(int a[10][10], int n)
{
 int det = 0;
 if (n == 2)
 {
 det = ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
 return det;
 }
}
int main()
{
 int n, i, j;
 printf("Enter the order of matrix : \n");
 scanf("%d", &n);
 int a[10][10];
 printf("Enter the elements of matrix : \n");
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 scanf("%d", &a[i][j]);
 }
 }
 printf("The input array is :\n");
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 printf("%d ", a[i][j]);
 }
 printf("\n");
 }
 printf("Determinant of matrix is : %d", determinatmat(a,
n));
 return 0;
}
