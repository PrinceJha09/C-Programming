#include<stdio.h>
int main(){
    //char arr[]={'H','e','l','l','o'} //isko print krenge to Hello ke baad kuch bhi aa jayega.
char arr[]="My name is Prince"; //" automatically end me \0 lga deta h"
int i=0;
while(arr[i]!='\0'){
printf("%c",arr[i]);
i++;
}
    return 0;
}