#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you?\n");

    return; // finish and return
}

int main(){
    greet(); // call for function
    greet();
    greet();

    return 0;
}