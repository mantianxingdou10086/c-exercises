#include<stdio.h>
#include<string.h>
int main(void){
    int a[55]={0},b[55]={0},sum[56]={0};
    char s1[55],s2[55];
    scanf("%s %s",s1,s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(int i=0;i<len1;i++){
        a[i]=s1[len1-1-i]-'0';
    }
    for(int i=0;i<len2;i++){
        b[i]=s2[len2-1-i]-'0';
    }
    int maxlen;
    if(len1>=len2){
        maxlen=len1;
    }
    else
        maxlen=len2;
    for(int j=0;j<maxlen;j++){
        sum[j]+=a[j]+b[j];
        if(sum[j]>=10){
            sum[j]=sum[j]-10;
            sum[j+1]++;
        }
    }
    int top=maxlen-1;
    if(sum[maxlen]>0)
        top=maxlen;
    for(int j=top;j>=0;j--){
        printf("%d",sum[j]);
    }
    printf("\n");
    return 0;
}