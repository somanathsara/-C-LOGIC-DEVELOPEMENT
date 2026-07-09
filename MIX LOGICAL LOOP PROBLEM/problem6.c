//wap a programm to print all the Armstrong number between 1 to 1000.
#include <stdio.h>

int main() {
    int n, i, no, sum, r ;
    for(i=1;i<=1000;i++){
        sum = 0;
        n = i;
        while(n>0){
            r = n%10;
            sum += r*r*r;
            n/=10;
        }
        if(sum == i){
            printf("%d ", i);
        }
    }
    return 0;
} 