#include<stdio.h>
int sum_proper(int n){
    int i,count=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            count+=i;
        }
    }
    return count;
}
int main(void){
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        b=sum_proper(a);
        if(a==sum_proper(b)&&b>a&&b<=n){
            printf("(%d,%d)\n",a,b);
        }
    }
    return 0;
}
