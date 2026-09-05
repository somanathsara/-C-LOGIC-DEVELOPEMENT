#include <stdio.h>

int main() {
    int n, i, sum = 0; int a = 0, b = 1, c;
    printf("Enter the number upto which you have to sum:");
    scanf("%d", &n);
    while(a<=n){
        sum += a;
        printf("%d + ",a);
        c = a+b;
        a = b;
        b = c;
    }
    printf("= %d",sum);
    return 0;
}