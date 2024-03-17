#include<stdio.h>
#include<string.h>
int main(){
typedef struct cricketer
{
    char name[20];
    int age;
    int matches;
    float average_runs;
    
}cricketer;

cricketer arr[11];

strcpy(arr[0].name,"ROHIT SHARMA");
arr[0].age=36;
arr[0].matches=70;
arr[0].average_runs=54.98;

strcpy(arr[1].name,"SHUBHMAN GILL");
arr[1].age=24;
arr[1].matches=25;
arr[1].average_runs=60.43;

strcpy(arr[2].name,"VIRAT KOHLI");
arr[2].age=34;
arr[2].matches=85;
arr[2].average_runs=65.85;

strcpy(arr[3].name,"SHREYAS IYER");
arr[3].age=30;
arr[3].matches=45;
arr[3].average_runs=48.90;

strcpy(arr[4].name,"KL RAHUL");
arr[4].age=32;
arr[4].matches=64;
arr[4].average_runs=50.54;

strcpy(arr[5].name,"HARDIK PANDYA");
arr[5].age=30;
arr[5].matches=58;
arr[5].average_runs=43.32;

strcpy(arr[6].name,"RAVINDRA JADEJA");
arr[6].age=34;
arr[6].matches=74;
arr[6].average_runs=38.96;

strcpy(arr[7].name,"KULDEEP YADAV");
arr[7].age=31;
arr[7].matches=49;
arr[7].average_runs=21.09;

strcpy(arr[8].name,"MOHAMMED SHAMI");
arr[8].age=33;
arr[8].matches=69;
arr[8].average_runs=11.03;

strcpy(arr[9].name,"JASPRIT BUMRAH");
arr[9].age=29;
arr[9].matches=58;
arr[9].average_runs=7.93;

strcpy(arr[10].name,"MOHAMMED SIRAJ");
arr[10].age=26;
arr[10].matches=30;
arr[10].average_runs=8.34;

for(int i=0;i<=10;i++){
printf("%s\n\n",arr[i].name);
printf("AGE: %d\n",arr[i].age);
printf("MATCHES: %d\n",arr[i].matches);
printf("AVERAGE RUNS: %f\n\n",arr[i].average_runs);

}
    return 0;
}