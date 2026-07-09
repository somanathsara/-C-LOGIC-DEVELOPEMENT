#include <stdio.h>
#include <math.h>
int main() {
    int x, n, i;
    double sum =0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of the variable: ");
    scanf("%d", &x);
    for(i=0;i<=n;i++){
        printf("%.0lf + ",pow(x,i));
        sum += pow(x,i);
    }
    printf(" = %.0lf",sum);
    return 0;
}