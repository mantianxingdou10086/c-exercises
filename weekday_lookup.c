#include<stdio.h>
#include<string.h>
int main(void){
    static char *week[]={"Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday", "Saturday",NULL};
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;week[i]!=NULL;i++){
        if(strcmp(str,week[i])==0){
            printf("%d",i);
            return 0;
        }
    }
    printf("Input Error!");
    return 0;
}




