//插入排序
#include<stdio.h>
void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int a=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>a){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=a;
    }
    
}
int main(void){
    int x[]={3,5,7,4,1,4};
    int n=6;
    sort(x,6);
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
}