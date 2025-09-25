#include<stdio.h>
signed main(){
    int n,i;
    scanf("%d",&n);
    for (i = 0; i<n; i++){
        int d;
        scanf("%d",&d);
        if (d%400 ==0 )
            printf("%d\n",d/400);
        else 
            printf("%d\n",(d/400)+1);
    }
    return 0;
}