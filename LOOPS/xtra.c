#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n=num;
    int count=0;
    for(count=0;num!=0;count++){
    num=num/10;
    }
    int digit,sum=0;
    if(count%2==0){
        int place=0;
        while (n!=0) {
        digit=n%10;
        if (place%2==0) {
        sum=sum+digit;
        }
        n=n/10;
        place++;
        }
    }
    if(count%2!=0){
        int place=1;
        while (n!=0) {
        digit=n%10;
        if (place%2==0) {
        sum=sum+digit;
        }
        n=n/10;
        place++;
        }
    }
    printf("Sum of digits at even places: %d\n", sum);
    return 0; 
}
