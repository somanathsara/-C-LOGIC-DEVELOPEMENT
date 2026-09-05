#include <stdio.h>

int fact( int n){
    int fa=1;int i;
    for(i=n;i>0;i--){
        fa*=i;
    }
    return fa;
}
int main() {
    int n, i; 
    double sum ;
    sum = 0;
    printf("Enter the number of terms here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d! + ",i);
        sum += fact(i);
    }
    printf("= %.0lf", sum);
    return 0;
}