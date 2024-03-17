#include<stdio.h>
int main(){
char str[]="Prince Kumar Jha";
char *ptr =str; // now ptr points to str[0]
while(*ptr!='\0'){
    printf("%c", *ptr);
    ptr++;
}
    return 0;
}