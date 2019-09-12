#include<stdio.h>
#include<malloc.h>
int main(void)
{
    int T,n;
    scanf("%d",&T);
    if(T<=0)
        goto exit;
    int i=0;
    while(T--)
    {
        scanf("%d",&n);
        int a=1,b=2,c;
        c=a+b+1;
        while(n-->0)
        {
            printf("%d ",a);
            a=b;
            b=c;
            c=a+b+1;
        }
        printf("\n");
    }
    return 0;
    exit:
    return 1;
}
