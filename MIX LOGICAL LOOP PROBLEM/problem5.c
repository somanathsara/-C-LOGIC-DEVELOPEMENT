//find & print the sum of odd digits & the sum of even digits.
#include <stdio.h>

int main() {
    int n, i, no, sum_of_odd = 0, sum_of_even = 0; int rem;
    printf("ENter the number here: ");
    scanf("%d", &n);
    no = n;
    while(n>0){
        rem = n%10;
        if(rem%2 == 0){
            sum_of_even += rem;
        } 
        else{
            sum_of_odd += rem;
        }
        n/= 10;
    }
    printf("The number is %d\nSum of even digits: %d\nSum of odd digits: %d",no, sum_of_even, sum_of_odd);
    return 0;
} 