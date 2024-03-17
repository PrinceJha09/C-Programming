#include<stdio.h>
int main(){
int n;
printf("Enter week number:");
scanf("%d",&n);
switch(n){
    case 1: 
    printf("SUNDAY"); break;
    case 2: 
    printf("MONDAY"); break;
    case 3: 
    printf("TUESDAY"); break;
    case 4: 
    printf("WEDNESDAY"); break;
    case 5: 
    printf("THURSDAY"); break;
    case 6: 
    printf("FRIDAY"); break;
    case 7: 
    printf("SATURDAY"); break;//ORDER CAN ALSO BE CHANGED.
    default: printf("Invalid Input");
}
    return 0;
}