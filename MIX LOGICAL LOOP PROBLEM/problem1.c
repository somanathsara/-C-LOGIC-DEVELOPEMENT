//print all the number between 1 to 100 whose sum of digit is even
#include <stdio.h>

int main() {
    int i,r, n; int sum ;
    for(i=1;i<=100;i++){
        n = i;
        sum = 0;
        while(n>0){
            r = n%10;
            sum += r;
            n /= 10;
        }
        if(sum%2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}