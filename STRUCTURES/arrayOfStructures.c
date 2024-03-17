#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

pokemon arr[3];
arr[0].attack=80;
arr[0].hp=70;
arr[0].speed=90;
arr[0].tier='S';
// pikachu.name="PIKACHU"; will give error
strcpy(arr[0].name,"PIKACHU");

arr[1].attack=90;
arr[1].hp=67;
arr[1].speed=100;
arr[1].tier='A';
strcpy(arr[1].name,"CHARIZARD");

arr[2].attack=150;
arr[2].hp=128;
arr[2].speed=200;
arr[2].tier='G';
strcpy(arr[2].name,"MEWTWO");

for(int i=0;i<=2;i++){
printf("%s\n",arr[i].name);
printf("ATTACK: %d\n",arr[i].attack);
printf("HP: %d\n",arr[i].hp);
printf("SPEED: %d\n",arr[i].speed);
printf("TIER: %c\n",arr[i].tier);

}
    return 0;
}