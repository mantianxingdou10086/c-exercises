//冒泡排序
#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int a;
            if(arr[j]>arr[j+1]){
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
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