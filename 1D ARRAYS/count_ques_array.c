#include<stdio.h>
int main(){
    int arr[5]={2,54,665,98,872};
    int x=345;
    int count=0;
    for(int i=0;i<=4;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}