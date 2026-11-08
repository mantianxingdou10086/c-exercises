#include<stdio.h>
int main(void){
    int a[1000];
    int evens[1000],odds[1000];
    int merged[1000];
    int n,i,ne=0,no=0,nm=0;
    int e,o,printed=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            evens[ne++]=a[i];
        }
        if(a[i]%2!=0){
            odds[no++]=a[i];
        }
    }
    e=0,o=0;
    while(e<ne&&o<no){
        merged[nm++]=evens[e++];
        merged[nm++]=odds[o++];
    }
    while(e<ne){
        merged[nm++]=evens[e++];
    }
    while(o<no){
        merged[nm++]=odds[o++];
    }
    printed = 0;
    for (i = 0; i < nm; i++)
    {
        if (i > 0 && merged[i] == merged[i - 1])
            continue;
         if (printed)         
            printf(" ");
    printf("%d", merged[i]);
    printed = 1;
    }
    printf("/n");
}


