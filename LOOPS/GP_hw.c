#include<stdio.h>
int main(){
    int n;
    printf("enter no. of terms");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n;i++){
        printf(" %d", a);
        a=4*a;
    }
    return 0;
}