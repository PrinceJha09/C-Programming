#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Person
{
    int age;
    float weight;
}Person;

int main(){
Person p1,p2;
// p1.age=18;
// p1.weight=56.80;
// p2.age=21;
// p2.weight=61.53;

Person *x =&p1;
(*x).age=18;
printf("%d",p1.age);
Person *y=&p2;
(*y).weight=61.53;
printf("\n%f",p2.weight);
    return 0;
}