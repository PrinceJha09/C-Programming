#include<stdio.h>
int main(){
    void bharat();
    bharat(); // calling  bharat
    return 0;
}
void bharat(){
    printf("aap bharat me hain\n");
    void australia();
    australia(); // calling australia
    return;
}
void australia(){
    printf("u r in australia\n");
    void england();
    england();  // calling england
    return;
}
void england(){
    printf("you are in england\n");
    return;
}





