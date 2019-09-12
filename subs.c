#include<stdio.h>
#include<string.h>
int main() {
    char a[11],b[6],*p;
    int tc;
    scanf("%d",&tc);
    while(tc--) {
    scanf("%s%s", a,b);
    p = strstr(a,b);
    if(p == NULL)
        printf("0\n");
    else
        printf("1\n");
    }
}

        
    
    
