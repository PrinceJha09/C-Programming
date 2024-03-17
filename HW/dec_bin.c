#include<stdio.h>
int main(){
int decimal;
printf("enter a decimal number\n");
scanf("%d",&decimal);
int binary=0;
int base=1;
while(decimal!=0){
    binary=binary+(base*(decimal%2));
    base=10*base;
    decimal=decimal/2;
}
printf("%d",binary);
    return 0;
}