//选择排序
#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int a=arr[i];
        arr[i]=arr[min];
        arr[min]=a;
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