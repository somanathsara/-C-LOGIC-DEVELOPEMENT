//print  all the palindrome number sbetween 1 to 500
#include <stdio.h>

int main() {
    int n, i, sum, rem;int r_no;
    for(i=1;i<=500;i++){
        n = i;
        r_no = 0;
        while(n>0){
            rem = n%10;
            r_no = r_no * 10 + rem;
            n = n/10;
        }
        if(r_no == i){
            printf("%d ", i);
        }
    } 
    return 0;
}