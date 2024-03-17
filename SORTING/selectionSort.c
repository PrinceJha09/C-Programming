#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    int arr[]={1,8,4,5,3,7};
    int n=6;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        int min=__INT_MAX__;
        int minidx=-1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}