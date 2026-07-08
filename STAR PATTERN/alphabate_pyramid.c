#include <stdio.h>

int main()
{
    int n, i, j, k, num;
    printf("Enter the number of rows here: ");
    scanf("%d", &n);
    num = 65;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}