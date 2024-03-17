#include<stdio.h>
int main(){
    float p;
    printf("enter the percentage:");
    scanf("%f", &p);
    if (p>=90 && p<=100)
    printf("Excellent");
    else if (p>=80)
    printf("very good");
     else if (p>=70)
    printf("good");
     else if (p>=60)
    printf("can do better");
     else if (p>=50)
    printf("average");
     else if (p>=40)
    printf("below average");
     else if (p<40)
     printf("fail");



    return 0;
}