#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int j=65;j<65+i;j++){
    //         printf("%c ",j);
    //     }
    //     printf("\n");
    // }
    for(int i=1;i<=n;i++){
        int a=1;            // using new variable makes it easier
        for(int j=1;j<=i;j++){
            int b=a+64;
        char c=(char)b;     //typecasting
            printf("%c ",c);
            a++;
        }
        printf("\n");
    }
}