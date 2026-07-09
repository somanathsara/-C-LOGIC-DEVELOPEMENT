#include <stdio.h>

int main() {
    float sum = 0.0; 
    int i, n;
    printf("Enter the number of terms here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum += 1.0/i;
        printf("1/%d + ",i);
    }
    printf("= %f", sum);
    return 0;
}