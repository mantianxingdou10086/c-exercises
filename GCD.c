#include<stdio.h>
int gcd(int a,int b){
    int m,i;
    if (a>b){
        m=b;
    }
    else
        m=a;
    for (i=m;i>=1;i--){
        if (a%i==0 && b%i==0){
            return i;
            break;
        }
    }
}
int main(void){
    int x,y,n;
    printf("请输入两个整数：");
    scanf("%d %d",&x,&y);
    n=gcd(x,y);
    printf("最大公因数是：%d\n",n);
    return 0;
}