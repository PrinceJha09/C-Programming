#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* ptr;
    ptr = fopen("prince.txt","r");
    char str[50];
    while(fgets(str,50,ptr)!=NULL){
        printf("%s",str);
    }
    fclose(ptr);
    return 0;
}