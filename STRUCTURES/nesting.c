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
typedef struct legendaryPokemon
{
    pokemon normal;
    char ability[10];
}legendaryPokemon;

legendaryPokemon mewtwo;
strcpy(mewtwo.ability,"PRESSURE");
mewtwo.normal.attack=90;
mewtwo.normal.name="MEWTWO";
    return 0;
}