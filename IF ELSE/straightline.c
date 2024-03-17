#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("enter values:");
    scanf("%lf %lf %lf %lf %lf %lf", &x1 ,&y1 ,&x2 ,&y2, &x3 ,&y3);
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    if (m1==m2) 
    printf("all 3 points lie on a straight line");
    else
    printf("not a straight line");
    
    return 0;

}
