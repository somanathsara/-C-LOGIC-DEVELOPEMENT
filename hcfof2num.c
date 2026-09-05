#include <stdio.h>

int main() {
    int a, b, i;int d,e;
    printf("Enter the two digit here:");
    scanf("%d %d",&a,&b);
    d=a;e=b;
    for(;1;){
        i = a%b;
        if(i == 0)
        break;
        else{

            a=b;
            b=i;
        }
    }
    printf("The HCF of %d & %d is %d", d, e, b);

    return 0;
}