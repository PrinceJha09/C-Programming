#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp=50;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp=96;
    fun(pikachu);
    change(pikachu);
    printf("%d",pikachu.hp);
    return 0;
}