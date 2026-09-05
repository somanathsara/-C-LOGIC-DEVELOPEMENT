//print all the perfect number between 1 to 1000
#include <stdio.h>

int main() {
    int n, i, r, sum;
    for(i=1;i<=1000;i++){
        sum =0;
        for(int j = 1;j<i;j++){
            if(i%j == 0){
                sum+= j;
            }
        }
        if(i == sum){
            printf("%d ", i);
        }
    }
    return 0;
}