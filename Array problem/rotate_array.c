#include <stdio.h>
int right(int a[],int n,int k){
    int i, j;                                                       //Error in right() must have to solve.
    printf("Entering to right function.");
    for(i=n+k,j=0;i>0;i--){
        a[i+k] = a[i];
        if(i+k >= n){
            a[j] = a[i+k];
            //j++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
int main() {
    int n, a[20], i, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the values arw here: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number of  rotation wants: ");
    scanf("%d", &k);
    right(a, n, k);
    return 0;
}