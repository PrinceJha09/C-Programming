#include<stdio.h>
int main(){
    int a=0,b=0;
    while(a<5){
        a++;
        b=0;
        while(b<5){
            b++;
            if(b==2) {
                continue;
            }
            printf("%d",b);
        }
        printf("\n");
    }
}