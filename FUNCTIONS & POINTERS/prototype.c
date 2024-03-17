#include<stdio.h>
int main(){
    void greet(); // prototype (niche likha h fir bhi print kiya.)
    greet();
    return 0;
}
void greet(){
    printf("Good Morning\n");
    return;
}