#include <stdio.h>

int main()
{
    int r, c, sum_of_row, sum_of_col;
    int i, j;
    printf("Enter the number of row of your matrix: ");
    scanf("%d", &r);
    printf("Enter the number of column of your matrix: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the value of array");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        sum_of_row = 0;
        for (j = 0; j < c; j++)
        {
            sum_of_row += arr[i][j];
        }
        printf("The sum of %d row is %d", i + 1, sum_of_row);
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        sum_of_col = 0;
        for (j = 0; j < c; j++){
            sum_of_col += arr[j][i];
        }
        printf("The sum of %d column is %d", i+1, sum_of_col);
        printf("\n");
    }
            return 0;
    }