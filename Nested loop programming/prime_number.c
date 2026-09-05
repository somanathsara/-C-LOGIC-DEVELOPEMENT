#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > i / 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}