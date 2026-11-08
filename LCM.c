#include<stdio.h>
int lcm(int a,int b){
    int m,i;
    if (a>b){
        m=a;
    }
    else
        m=b;
    for (i=m;;i++){
        if (i%a==0 && i%b==0){
            return i;
            break;
        }
    }
}
int main(void){
    int x,y,n;
    printf("请输入两个整数：");
    scanf("%d %d",&x,&y);
    n=lcm(x,y);
    printf("最小公倍数是：%d\n",n);
    return 0;
}