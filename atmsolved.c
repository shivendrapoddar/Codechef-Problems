#include <stdio.h>
int main() {
    int transaction;
    float initial;
    scanf("%d %f", &transaction, &initial);
    if (transaction % 5 == 0 && transaction < initial - 0.5 ) {
        initial = initial - transaction - 0.5;
    }
    printf("%.2f", initial);
    return 0;
}
