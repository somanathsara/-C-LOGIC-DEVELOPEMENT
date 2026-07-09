/*
find the number between 1 to n that has maximum digit sum & print the number along
with it's sum.
*/
#include <stdio.h>

int main()
{
    int n, i, max_dig, sum, r, no, final;
    printf("Enter the value of n  here :");
    scanf("%d", &n);
    max_dig = 0;
    for (i = 1; i <= n; i++)
    {
        no = i;
        sum = 0;
        while (no > 0)
        {
            r = no % 10;
            sum += r;
            no = no / 10;
        }
        if (sum > max_dig)
        {
            max_dig = sum;
            final = i;
        }
    }
    printf("The number having maximum digit = %d\nSum = %d", final, max_dig);

    return 0;
}