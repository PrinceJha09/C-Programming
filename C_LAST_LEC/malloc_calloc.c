#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr=(int* )malloc(10*4);
printf("%d",*ptr);
char* ptr1=(char*)calloc(10,1);
printf("\n%d",*ptr1);
    return 0;
}