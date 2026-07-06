#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%2d %2d|", i, j);
        }
        printf("\n");
    }
    return 0;
}