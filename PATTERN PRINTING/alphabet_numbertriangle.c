#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            printf("%d ",j);
            }
        }
        else{
            int a=1;            // using new variable makes it easier
        for(int j=1;j<=i;j++){
            int b=a+64;
        char c=(char)b;     //typecasting
            printf("%c ",c);
            a++;
        }
        }
        printf("\n");
    }

}