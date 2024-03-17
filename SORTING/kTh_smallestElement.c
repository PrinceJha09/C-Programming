#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,4,5,3,7};
    int n=6;
    int k=3;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        bool flag=true; // sorted 
        for (int j = 0; j < n-1-i; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            } 
        }
        if (flag==true){break;}
    }
    printf("\n%dth smallest element is %d",k,arr[k-1]); //using bubble sort
    return 0;
}