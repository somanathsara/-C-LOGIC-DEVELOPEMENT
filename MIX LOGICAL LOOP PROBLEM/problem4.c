//print all the number between 1 to 1000 whose sum of digit is multiple of 3
#include <stdio.h>

int main() {
    int n, i, no, sum;
    for(i=1;i<=1000;i++){
        sum = 0;
        n = i;
        while(n>0){
            no = n%10;
            sum += no;
            n = n/10;
        }
        if(sum%3 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}