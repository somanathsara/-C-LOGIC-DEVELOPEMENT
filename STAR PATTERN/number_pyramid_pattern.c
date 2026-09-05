#include <stdio.h>

int main() {
    int n, i, num, k, j;
    int itration;
    printf("Enter the number of rows here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        num = 1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("%d",num);
            itration = (2*i - 1)/2;
            if(k<=itration)
            num ++;
            else
            num--;
        }
        printf("\n");
    }
    return 0;
}