#include<stdio.h>
int main() {
    int num1 , num2 ,tc, sum;
    scanf("%d", &tc);
    while(tc--) {
    scanf("%d %d", &num1,&num2);
    sum = num1 + num2;
    printf("%d\n",sum);
    }
    return 0;
    }
