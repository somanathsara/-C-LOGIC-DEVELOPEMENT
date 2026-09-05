#include <stdio.h>

int main()
{
    int a, b, c, n, i;
    a = 0;
    b = 1;
    printf("Enter the number upto which you want to print: ");
    scanf("%d", &n);
    while (a <= n)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}