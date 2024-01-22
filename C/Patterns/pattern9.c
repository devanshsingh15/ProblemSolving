#include <stdio.h>
main()
{
    int rows,i,k,c=1;
    printf("Enter number of rows: \n");
    scanf("%d", &rows);
    c=rows - 1;
    for (k=1; k <=rows; k++)
    {
        for (i = 1; i <=c; i++)
            printf(" ");
        c--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
     }
     c= 1;
     for (k = 1; k <=rows - 1; k++)
        {
         for (i = 1; i <= c; i++)
             printf(" ");
         c++;
         for (i = 1 ; i <= 2 *(rows - k)-  1; i++)
             printf("*");
         printf("\n");
      }
}
