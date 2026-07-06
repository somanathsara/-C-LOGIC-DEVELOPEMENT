#include <stdio.h>

int main() {
    int n, i, sq;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Square of %d is %d\n", i, i*i);
    }
    return 0;
}