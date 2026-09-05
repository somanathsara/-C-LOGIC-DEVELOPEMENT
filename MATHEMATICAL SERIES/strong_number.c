#include <stdio.h>
//strong number - if the sum of all digits factorial is equal to this number thats called as strong number. 
//e.g. = 145, 2, 40585
int fact( int n){
    int fa=1;int i;
    for(i=n;i>0;i--){
        fa*=i;
    }
    return fa;
}
int main() {
    int n, no;
    int rem, sum = 0;
    printf("Enter the number here: ");
    scanf("%d", &n);
    no = n;
    while(n>0){
        rem = n%10;
        sum += fact(rem);
        n = n/10;
    }
    if(sum == no){
        printf("%d is a strong number.", no);
    }
    else{
        printf("%d is not a strong number.", no);
    }
    return 0;
}