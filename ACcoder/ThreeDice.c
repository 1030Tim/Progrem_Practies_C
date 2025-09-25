#include<stdio.h>
signed main(){
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    a = 7-a;
    b = 7-b;
    c = 7-c;
    sum = a+b+c;
    printf("%d\n",sum);
    return 0;
}