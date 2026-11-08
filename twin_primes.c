#include<stdio.h>
int is_prime(int n){//判断素数
    int i;
    if(n<2){
        return 0;
    }
    if(n%2==0){
        return n==2;
    }
    for(i=3;i*i<=n;i+=2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(void){
    int c,d,p,count=0;
    scanf("%d,%d",&c,&d);
    for(p=c;p+2<=d;p++){
        if(is_prime(p)&&is_prime(p+2)){
            printf("(%d,%d)",p,p+2);
            count++;
        }  
    }
    printf("\n%d",count);
    return 0;
}