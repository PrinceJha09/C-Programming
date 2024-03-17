#include<stdio.h>
int fact(int a){
    int b=1;
    for(int i=2;i<=a;i++){
        b=b*i;
    }
        return b;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int r;
    printf("enter r");
    scanf("%d",&r);
    // int nfact= fact(n);
    // int rfact= fact(r);
    // int nrfact= fact(n-r);
    int nCr=fact(n)/(fact(r)*fact(n-r));
    printf("nCr is %d", nCr);
    return 0;
}