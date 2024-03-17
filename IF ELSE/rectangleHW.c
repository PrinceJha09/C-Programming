#include<stdio.h>
int main(){
    int l;
    printf ("Enter length:");
    scanf("%d",&l);
    int b;
    printf("\nenter breadth:");
    scanf("%d", &b);
    int area= l*b;
    int perimeter= 2*(l+b);
    if(area>perimeter){
        printf("\nyes, the area of the rectangle is greater than its perimeter");
    }
    else{
        printf("\nno, the area of the rectangle is not greater than its perimeter");
    }

    return 0;
}