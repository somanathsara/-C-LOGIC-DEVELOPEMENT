//count total number between 1 to 500 that are divisible by 7 but not divisible by 5
#include <stdio.h>

int main() {
    int n, i, count = 0; 
    for(i=1;i<=500;i++){
        if(i%7 == 0 && i%5 != 0){
            printf("%d ", i);
            count ++;
        }
    }
    printf("\n");
    printf("%d numbers", count);
    return 0;
} 