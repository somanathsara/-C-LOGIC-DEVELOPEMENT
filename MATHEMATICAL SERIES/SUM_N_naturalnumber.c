#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0; 
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("The sum  1 to %d is %d", n, sum);
    
    return 0;
}