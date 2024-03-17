#include<stdio.h>
int main(){
    int i=10;
    // while(i<10){
    //     printf("hello"); //no output
    //     i++;
    // }
    do {
        printf("hello");
        i++;
    }while(i<10);
    return 0;
}