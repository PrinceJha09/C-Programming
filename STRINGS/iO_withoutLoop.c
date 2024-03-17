#include<stdio.h>
#include<string.h>
int main(){
char str[100];
// scanf("%s",str); //pass by reference // only first word is considered in scanf
scanf("%[^\n]s",str); //whole sentencecan be input
// gets(str);//whole sentencecan be input
// printf("%s",str);
puts(str); //auto \n
    return 0;
}