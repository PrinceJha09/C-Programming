#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // 1-2+3-4+5-6+....... upto n terms
    if (n%2==0){
        printf("sum of series is :%d", (-1)*n/2);
    }
    else printf("sum of series is :%d", (-1)*n/2 + n);
    return 0;
}