#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("ENter the value of n ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("The sum of number from 1 to %d is %d", n, sum);
    return 0;
}