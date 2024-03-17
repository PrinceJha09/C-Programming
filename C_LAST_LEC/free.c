#include<stdio.h>
#include<stdlib.h>
int main(){
// int n;
// printf("enter number of integers");
// scanf("%d",&n);
int *ptr=(int* )malloc(8*(sizeof(int)));
int* p=ptr;
p++;
// for(int i=0;i<n;i++){
//     scanf("%d",&(*ptr));
//     ptr++;
// }
// for(int i=0;i<n;i++){
//     printf("%d ",(*p));
//     p++;
// }
free(p);
// ptr=NULL;
// printf("%p",ptr);
    return 0;
}