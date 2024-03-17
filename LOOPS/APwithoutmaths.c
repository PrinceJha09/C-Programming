#include<stdio.h>
int main(){
    int n;
    printf("enter no. of terms");
    scanf("%d",&n);
    // use of extra variables
    int a=4;
    for(int i=1;i<=n;i++){
        printf(" %d", a);
        a=a+3;
    }
    return 0;
}