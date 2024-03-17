#include<stdio.h>
int main(){
typedef struct employee
{
    int emp_id;
    char code;
    float salary;
}EMP; //RENAMING STRUCT EMPLOYEE AS EMP USING TYPEDEF.

EMP prince;
prince.emp_id=65;
prince.code='A';
prince.salary=500000.90;

EMP raunak;
raunak.emp_id=84;
raunak.code='B';
raunak.salary=499999.90;

EMP yash;
yash.emp_id=88;
yash.code='C';
yash.salary=499998.80;

printf("%f",raunak.salary);


    return 0;
}