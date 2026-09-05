#include <stdio.h>

int main() {
    int n, i;int sum = 0;
    printf("Enter the value of n ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum += i;
        }
    }
    printf("The sum of 1 upto %d even numbers is %d", n, sum);
        return 0;
}