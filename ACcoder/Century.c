#include<stdio.h>
signed main(){
    int n,ans = 0;
    scanf("%d",&n);
    if (n%100!=0) ans+=1;
    ans += n/100;
    printf("%d\n",ans);
    return 0;
}