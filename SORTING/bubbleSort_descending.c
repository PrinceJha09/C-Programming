#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,4,5,3};
    int n=5;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        bool flag=true; // sorted 
        for (int j = n-1; j>i; j--){
            if (arr[j-1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                flag=false;
            } 
        }
        if (flag==true){break;}
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}