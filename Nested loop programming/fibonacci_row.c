#include <stdio.h>

int main()
{
    int a, b, c, i, n;
    a = 0;
    b = 1;
    printf("Enter the number of rows wants to print: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d \n",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}