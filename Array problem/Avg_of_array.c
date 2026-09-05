#include <stdio.h>

int main()
{
    int n, count, total, i, j, avg;
    int k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count = 0;
        total = 0;
        int a[20];
        printf("Enter numbers here :");
        for (j = 0; a[j]; j++)
        {
            printf("a[%d][%d] : ",i, j);
            scanf("%d", &a[j]);
            total += a[j];
            count++;
            printf("%d %d\n", count, total);
        }
        for (k = 0; k <= j; k++)
        {
            printf("%d ", a[k]);
        }
        avg = total / count;
        printf("\n Average = %d", avg);
    }
    return 0;
}
