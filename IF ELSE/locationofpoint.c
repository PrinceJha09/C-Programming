#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates");
    scanf("%d %d", &x,&y);
    if (x==0 && y==0)
    printf("point is origin");
    else if (x==0)
    printf("point lies on y axis");
    else if (y==0)
    printf("point lies on x axis");

    return 0;
}