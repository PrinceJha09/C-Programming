#include<stdio.h>
float av(int a, int b, int c);
int main(){
int x;
printf("enter x:");
scanf("%d",&x);
int y;
printf("enter y:");
scanf("%d",&y);
int z;
printf("enter z:");
scanf("%d",&z);

float ave =av(x,y,z);
printf("%f",ave);
return 0;
}

float av(int a,int b,int c){
    float average=(a+b+c)/3.0;
    return average;
}
    
