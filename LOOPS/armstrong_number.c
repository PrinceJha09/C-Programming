#include<stdio.h>
int main(){
    int i;
    int n;
    for(i=1;i<=500;i++){
        int sum=0;
        for(n=i;n!=0;n=n/10){
        sum=sum+((n%10)*(n%10)*(n%10)); 
        }
        if(sum==i) printf("%d ",sum);
        
    }  
}

