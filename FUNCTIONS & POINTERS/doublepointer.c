#include<stdio.h>
 int main(){
int a=9;
int *x=&a;
int **y=&x;
printf("%d %d %d", a, *x,**y);
    return 0;
}