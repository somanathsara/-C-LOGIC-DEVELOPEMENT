#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number here: ");
    scanf("%d", &n);
    for(i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum == n)
    printf("%d is a perfect number", n);
    return 0;
}