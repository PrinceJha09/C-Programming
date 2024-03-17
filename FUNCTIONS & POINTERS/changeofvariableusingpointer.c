#include<stdio.h>
int main(){
   int a=7;
   int* p=&a;
   *p=9;
   printf("%d",*p);
   return 0;

}