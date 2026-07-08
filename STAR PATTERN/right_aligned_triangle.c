
/*
       *
      **
     ***
    ****
   *****
  ******

*/

#include <stdio.h>

int main() {
    int n, j,k,i;
    printf("Enter the number of rows here:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}