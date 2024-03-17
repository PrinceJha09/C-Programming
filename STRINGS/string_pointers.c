#include<stdio.h>
#include<string.h>
int main(){
char str[]="college wallah";
char *ptr=str;
ptr="physics wallah"; // ek nya string bana aur ptr ut ke waha chala gya
printf("%s",str);
    return 0;
}