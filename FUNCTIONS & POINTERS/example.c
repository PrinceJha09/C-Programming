#include<stdio.h>
void england(){
    printf("you are in england\n");
    return;
}

void australia(){
    printf("u r in australia\n");
    england();  // calling england
    return;
}

void bharat(){
    printf("aap bharat me hain\n");
    australia(); // calling australia
    return;
}

int main(){
    bharat(); // calling  bharat
    return 0;
}
