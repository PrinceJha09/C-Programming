#include<stdio.h>
int main(){
    char a;
    printf("\nENTER WEEKDAY NAME FIRST LETTER :\n");
    scanf("%c",&a);
    if (a=='M' || a=='m') printf("THE DAY IS MONDAY");
    else if (a=='t' || a=='T') printf("THE DAY IS TUESDAY OR THURSDAY");
    else if (a=='w' || a=='W') printf("THE DAY IS WEDNESDAY");
    else if (a=='F' || a=='f') printf("THE DAY IS FRIDAY");
    else if (a=='s' || a=='S') printf("THE DAY IS SATURDAY OR SUNDAY");
    else printf("INVALID INPUT");
    return 0;
}