#include<stdio.h>
int main(void){
    int result,operand;
    char op;
    if(scanf("%d",&result)!=1){
        return 0;
    }
    while(scanf(" %c",&op)==1){
        if(op=='='){
            printf("%d\n",result);
            break;
            return 0;
        }
        if(op!='+'&&op!='-'&&op!='*'&&op!='/'){
            printf("错误的运算符:%c\n",op);
            return 0;
        }
        if (scanf("%d", &operand) != 1) {
            char bad;
            if (scanf(" %c", &bad) == 1 && bad != '='){
                printf("错误的运算符:%c\n", bad);
            }
            return 0;
        }
        if(op=='+'){
            result+=operand;
        }
        if(op=='-'){
            result-=operand;
        }  
        if(op=='*'){
            result*=operand;
        } 
        if(op=='/'){
            result/=operand;
        } 
    }
    return 0;
}

