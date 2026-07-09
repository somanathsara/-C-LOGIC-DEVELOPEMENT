#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int fa = 1;
    int i;
    for (i = n; i > 0; i--)
    {
        fa *= i;
    }
    return fa;
}
int main()
{
    int n, num, i;
    // char x;
    float res = 0;
    printf("Enter the number of terms here: ");
    scanf("%d", &n);
    printf("Enter the value of the variable: ");
    scanf("%d", &num);
    printf("The value of the series: \n");
    for (i = 1; i <= n; i++)
    {   if(i%2 == 0){
        printf(" - x^%d/%d! ", i, i);
        res -= pow(num, i) / fact(i);
    }
    else{
        printf(" + x^%d/%d! ", i, i);
        res += pow(num, i) / fact(i);
    }
}
    printf("= %.4f   at x = %d",res, num);
    return 0;
}