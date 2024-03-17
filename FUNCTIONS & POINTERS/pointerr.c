#include<stdio.h>
int main(){
    int a=9;
    int* p;
    p=&a;
    printf("%p", p);
    printf("\n%d", *p);
    return 0;
}