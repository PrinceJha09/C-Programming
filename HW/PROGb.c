#include<stdio.h>
int main(){
//from date = 01.01.2023
//to date = 06.12.2023
int days=31+28+31+30+31+30+31+31+30+31+30+6;
int weeks=days/7;
int leftoverdays=days%7;
printf("%d days",days);
printf("\n%d weeks and %d days",weeks,leftoverdays);
    return 0;
}