#include<stdio.h>
int main(){
int binary;
printf("enter a binary number\n");
scanf("%d",&binary);
int decimal=0;
int base=1;
while(binary!=0){
    decimal=decimal+(base*(binary%10));
    base=2*base;
    binary=binary/10;
}
printf("%d",decimal);
    return 0;
}