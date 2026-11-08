#include<stdio.h>
#include<string.h>
int main(void){
    char s[100];
    int i;
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<'z'){
            s[i]=s[i]+1;
        }
        else if(s[i]=='z'){
            s[i]='a';
        }
        if(s[i]>='A'&&s[i]<'Z'){
            s[i]=s[i]+1;
        }
        else if(s[i]=='Z'){
            s[i]='A';
        }
    }
    printf("%s",s);
    return 0;
}