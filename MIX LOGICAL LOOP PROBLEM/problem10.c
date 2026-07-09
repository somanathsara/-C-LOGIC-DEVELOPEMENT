//print all thn number from 1 to  n whose binary representaion coontain even number of 1's.
#include <stdio.h>

int main() {
    int n, r,i, num , count;
    printf("Enter the value of n here :");
    scanf("%d" ,&n);
    for(i=1;i<=n;i++){
        count = 0;num = i;
        while(num>0){
            r = num%2;
            if(r==1){
                count++;
            }
            num/=2;
        }
        if(count%2 == 0){
            printf("%d ",i);
        }
    } 
    return 0;
}