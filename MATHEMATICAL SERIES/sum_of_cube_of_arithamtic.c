#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter the number of terms here: ");
    scanf("%d", &n);
    for(i = 1; i<=n;i++){
        sum += i*i*i;
        printf("%d^3 + ", i);
    } 
    printf("= %d", sum);
    
    return 0;
}