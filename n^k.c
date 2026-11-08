#include<stdio.h>
int power(int n,int k){
    if(k==1){
        return n;
    }
    return n*power(n,k-1);
}
int main(void){
    int n,k,m;
    printf("请输入n和k:");
    scanf("%d %d",&n,&k);
    m=power(n,k);
    printf("%d的%d次方是:%d\n",n,k,m);
    return 0;
}