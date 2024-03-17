#include<stdio.h>
int main(){
    int n;
    printf("\nENTER WEEKDAY NUMBER :\n");
    scanf("%d",&n);
    if (n==1) printf("THE DAY IS MONDAY");
    else if (n==2) printf("THE DAY IS TUESDAY");
    else if (n==3) printf("THE DAY IS WEDNESDAY");
    else if (n==4) printf("THE DAY IS THURSDAY");
    else if (n==5) printf("THE DAY IS FRIDAY");
    else if (n==6) printf("THE DAY IS SATURDAY");
    else if (n==7) printf("THE DAY IS SUNDAY");
    else printf("INVALID INPUT");
    return 0;
}