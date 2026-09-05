//1 + 2 + 4 + 8 + 16 + 32 + 64 + ...+ 2^n
#include <stdio.h>
#include <math.h>
int main() {
    int n ,num =2, i;
    double sum = 0.0;
    printf("Enter the number of terms here: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        printf("%.0lf + ",pow(2,i));
        sum += pow(2,i);
    }
    printf("= %.0lf", sum);
    return 0;
}