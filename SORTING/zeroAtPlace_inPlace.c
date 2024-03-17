#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={0,1,2,0,4,0,5,0,0,3};
    int n=10;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < 5; i++){
        bool flag=true;
        for (int j = 0; j < n-1-i; j++){
            if (arr[j]==0 && arr[j+1]!=0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}