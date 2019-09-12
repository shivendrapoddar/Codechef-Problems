#include<stdio.h>
#include<math.h>

int main() {
    int num1, num2, currentDigit1, currentDigit2, currentSum,tc;
    scanf("%d",&tc);
    while(tc--) {
           int finalSum = 0;
           int index = 0;
           scanf("%d%d", &num1 ,&num2);
           while (num1 > 0 || num2 > 0) {
                currentDigit1 = num1 % 10;
                currentDigit2 = num2 % 10;
                currentSum = (currentDigit1 + currentDigit2) % 10;
                num1 /= 10;
                num2 /= 10;
                finalSum += pow(10, index) * currentSum;
                index++;
        }
           printf("%d\n",finalSum);
    }
    return 0;
}

