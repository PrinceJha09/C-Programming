#include<stdio.h>
void swap(int *x,int *y){ //pass by reference
    int temp= *x;
    *x = *y;
    *y = temp;
    return ;
}
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    int*p=&a , *q=&b;
    swap (p,q);
    printf("The value of a is %d",a);
    printf("\n The value of b is %d", b);
    return 0;
}