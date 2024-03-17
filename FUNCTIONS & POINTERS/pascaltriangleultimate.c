#include<stdio.h>
// int fact(int a){
//     int b=1;
//     for(int i=2;i<=a;i++){
//         b=b*i;
//     }
//         return b;
// }
// int combination(int n,int r){
//     int nCr=fact(n)/(fact(r)*fact(n-r));
//     return nCr;
// }
int main(){
    int n;
    printf("enter no of rows and columns");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-1-i;k++){
            printf("  "); //space ke liye alag se likhna hoga hm filhaal aise hi kr diye
        }
        int first=1;
        for(int j=0;j<=i;j++){
        printf("%d   ",first);
        first= first *(i-j)/(j+1);
    }
    printf("\n");
    }
    return 0;
}