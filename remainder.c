#include<stdio.h>
int main() {
    int numa , numb ,rem , tc ;
    scanf("%d",&tc);
    for(int i = 0; i < tc ; i++) {
        scanf("%d %d", &numa ,&numb);
        rem = numa % numb ;
        printf("%d \n",rem);
    }
    return 0;
}
    
        
    
