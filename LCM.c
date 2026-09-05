#include <stdio.h>

int main() {
    int a, b, i, n;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
    i = a;
    else
    i = b;
    for( ;1;i++){
        if(i%a==0 && i%b==0)
        break;
    }
    printf("The LCM of %d & %d is %d", a, b, i);
    return 0;
}