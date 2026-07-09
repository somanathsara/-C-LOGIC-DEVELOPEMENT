#include <stdio.h>
// #include <math.h>
int main() {
    int n, cr, a, i, t;
    printf("Enter the 1st term here: ");
    scanf("%d", &a);
    printf("Enter the common ratio here: ");
    scanf("%d", &cr);
    printf("Enter the number of terms wants to print: ");
    scanf("%d", &n);
    t = a;
    for(i=1;i<=n;i++){
        printf("%d ", t);
        t = t * cr;
    } 
    return 0;
}