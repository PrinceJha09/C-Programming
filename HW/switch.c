#include<stdio.h>
int main(){
char option;
printf("Choose option A,B,C,D\n");
scanf("%c",&option);
switch(option){
    case ('A'):
    printf("You choose option A\n");
    case 'B':
    printf("You choose option B\n");
    break;
    case 'C':
    printf("You choose option C\n");
    break;
    case 'D':
    printf("You choose option D\n");
    default:
    printf("Invalid option\n");
}
    return 0;
}