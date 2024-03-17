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

pokemon a,b;
a.attack=80;
a.hp=70;
a.speed=90;
a.tier='S';
// pikachu.name="PIKACHU"; will give error
strcpy(a.name,"PIKACHU");

b=a;
printf("%s",b.name);

    return 0;
}