#include <stdio.h>

int main() {
    int n, i, a, b;
    printf("Enter the value of a & b");
    scanf("%d %d", &a,&b);
    for(i = a;i<=b;i++){
        if(i%7 == 0){
            printf("%d is divisible by 7\n", i);
        }
    }
    return 0;
}