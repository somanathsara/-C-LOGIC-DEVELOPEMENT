#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("ENter the value of n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("The sum of 1st odd number from  1 to %d is %d", n, sum);
    return 0;
}