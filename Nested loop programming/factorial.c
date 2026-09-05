#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the value of n here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int fact = 1;
        for(j=i;j>=1;j--){
            fact *= j;
        }
        printf("The factorial of %d is %d\n", i, fact);
    }
    return 0;
}