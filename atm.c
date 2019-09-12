#include<stdio.h>
int main() {
    float initialbalance,updatedbalance;
    int transaction;
    scanf("%f %d", &initialbalance , &transaction);
    if((transaction + 0.50) < initialbalance && (transaction % 5 == 0)) 
        updatedbalance = (float)initialbalance - (float)transaction - 0.50;
    else 
        updatedbalance == initialbalance;
    printf("%.2f \n", updatedbalance);
    return 0;
} 
