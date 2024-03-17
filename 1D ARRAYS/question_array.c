#include<stdio.h>
void fun(int a[]){//pass by refrence
    for(int i=0;i<=3;i++){
        if (i%2==0) a[i]=a[i]+10;
        else a[i]=2*a[i];
    }
    return ;
}
int main(){
    int arr[4]={8,96,78,87};
    fun(arr);
    for(int i=0;i<=3;i++){
       printf("\n%d",arr[i]);
    }

    return 0;
}