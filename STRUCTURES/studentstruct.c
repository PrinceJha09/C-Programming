#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct Student
{
    char name[10];
    int roll;
    char dept[10];
    char course[10];
    int year;
}Student;

void department(Student a,Student b){
    char *s1;
    char *s2;
    strcpy(s1,a.dept);
    strcpy(s2,b.dept);
    bool flag=true;
    for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){
    if(s1[i]!=s2[i]){
        flag=false;
    }
    }
    if (flag==true) printf("Same department");
    else printf("Different department");
    return;
}
int main(){

Student prince;
strcpy(prince.name,"PRINCE");
prince.roll=65;
strcpy(prince.dept,"Computer");
strcpy(prince.course,"B.Tech");
prince.year=2023;


Student raunak;
strcpy(raunak.name,"RAUNAK");
raunak.roll=84;
strcpy(raunak.dept,"Computer"); 
strcpy(raunak.course,"B.Tech");
raunak.year=2023;

department(prince,raunak);

    return 0;
}