#include <stdio.h>

int main()
{
    int n, i, cd, a;int t;
    printf("Enter the first term of the series here: ");
    scanf("%d", &a);
    printf("Enter common difference here: ");
    scanf("%d", &cd);
    printf("Enter number of terms wants to print: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        t = a + (i-1)*cd;
        printf("%d, ",t);
    }

    return 0;
}