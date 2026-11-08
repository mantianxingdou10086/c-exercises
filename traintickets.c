#include<stdio.h>
int main(void){
    int n,i,row,c,s,t;
    int seat[20][5]={0};
    char col[6]="ABCDF";
    scanf("%d",&n);
    /* 第一步：找同排相邻的 k 个空座，从最小编号开始找 */
    for(i=0;i<n;i++){
        int k=0,cnt=0,found=0;//k是每次要买的票数
        scanf("%d",&k);
        for(row=0;row<20&& !found;row++){
            for(s=0;s+k<=5&& !found;s++){
                int ok=1;
                for(t=0;t<k;t++){
                    if(seat[row][s+t]){
                        ok=0;
                    }
                }
                if(ok){
                    for(t=0;t<k;t++){
                        seat[row][s+t]=1;
                        if(cnt>0){
                            printf(" ");
                        }
                        printf("%d%c",row+1,col[s+t]);
                        cnt++;
                    }
                    found=1;
                }
            }
        }
        if(!found){
             for(row=0;row<20&&cnt<k;row++){
                for(c=0;c<5&&cnt<k;c++){
                     if(!seat[row][c]){
                        seat[row][c]=1;
                        if(cnt>0){
                            printf(" ");
                     }
                    printf("%d%c",row+1,col[c]);
                    cnt++;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}