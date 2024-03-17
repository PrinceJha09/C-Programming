#include<stdio.h>
#include<string.h>
int main(){
typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

pokemon pikachu;

pikachu.attack=80;
pikachu.hp=70;
pikachu.speed=90;
pikachu.tier='S';
strcpy(pikachu.name,"PIKACHU");

printf("%d\n",pikachu.attack);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);
printf("%d\n",pikachu.speed);
printf("%d\n",pikachu.hp);

    return 0;
}