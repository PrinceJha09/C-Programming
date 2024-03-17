#include<stdio.h>
int main(){
    int cp;
    printf ("Enter cost price:");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price:");
    scanf("%d", &sp); 
    if(cp>sp){
        printf("the seller has incurred loss and loss is : %d", cp-sp);
    }
    if(cp<sp){
        printf("the seller has made profit and profit is: %d", sp-cp);
    }
    else{
        printf("the seller has neither made profit nor loss");
    }

    return 0;
}