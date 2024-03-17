#include<stdio.h>
void fun(int a[]){//pass by refrence
    a[0]=34;
    return ;
}
int main(){
    int arr[4]={8,96,78,87};
    printf("%d",arr[0]);
    fun(arr);
    printf("\n%d",arr[0]);

    return 0;
}