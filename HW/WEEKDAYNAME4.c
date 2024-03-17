#include<stdio.h>
int main(){
    char a;
    printf("\nENTER WEEKDAY NAME FIRST LETTER :\n");
    scanf("%c",&a);
    if (a=='M' || a=='m') printf("THE DAY IS MONDAY");
    else if (a=='t' || a=='T') {
        char b;
        printf("\nENTER WEEKDAY NAME FIRST LETTER :\n");
        scanf(" %c",&b);
        if(b=='u'||b=='U')
        printf("THE DAY IS TUESDAY");
        else if(b=='h'||b=='H')
        printf("THE DAY IS THURSDAY");
        else printf("INAVLID INPUT");
    }
    else if (a=='w' || a=='W') printf("THE DAY IS WEDNESDAY");
    else if (a=='F' || a=='f') printf("THE DAY IS FRIDAY");
    else if (a=='s' || a=='S') {
        char b;
        printf("\nENTER WEEKDAY NAME SECOND LETTER :\n");
        scanf(" %c",&b);
        if(b=='A'||b=='a')
        printf("THE DAY IS SATURDAY");
        else if(b=='u'||b=='U')
        printf("THE DAY IS SUNDAY");
        else printf("INAVLID INPUT");
    }
    else printf("INVALID INPUT");
    return 0;
}