#include<stdio.h>
#include<string.h>
int main(){
struct Person
{
    char name[10];
    int age;
    float salary;
};

struct Person prince;
strcpy(prince.name,"PRINCE");
prince.age=18;
prince.salary=150.000000;

struct Person raunak;
strcpy(raunak.name,"RAUNAK");
raunak.age=21;
raunak.salary=4000000.50;

printf("%s\n",prince.name);
printf("%d",raunak.age);


    return 0;
}