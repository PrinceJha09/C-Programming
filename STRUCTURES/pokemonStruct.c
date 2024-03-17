#include<stdio.h>
#include<string.h>
int main(){
struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pikachu, charizard, mewtwo;

pikachu.attack=80;
pikachu.hp=70;
pikachu.speed=90;
pikachu.tier='S';
// pikachu.name="PIKACHU"; will give error
strcpy(pikachu.name,"PIKACHU");

charizard.attack=90;
charizard.hp=67;
charizard.speed=100;
charizard.tier='A';
strcpy(charizard.name,"CHARIZARD");

mewtwo.attack=150;
mewtwo.hp=128;
mewtwo.speed=200;
mewtwo.tier='G';
strcpy(mewtwo.name,"MEWTWO");

printf("%d\n",pikachu.attack);
printf("%c\n",charizard.tier);
printf("%s\n",mewtwo.name);

    return 0;
}