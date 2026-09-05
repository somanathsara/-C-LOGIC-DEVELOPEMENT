#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("The cube of %d is %d\n", i, i*i*i);
    }
    return 0;
}