#include<stdio.h>
int main(){
    int arr[99];
    int sum;
    int sum2=100*101/2;
    for(int i=0;i<=98;i++){
       sum=sum+arr[i];
    }
    printf("the elemnt not present in the array is %d",sum2-sum);
    return 0;
}