#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(){

	
struct Player{
	char name[50];
	int score;
	float health;
};

struct Player p1;

strcpy(p1.name, "Hans");
p1.score = 100;
p1.health = 75.5;

printf("Name: %s\n", p1.name);
printf("Score %d\n", p1.score);
printf("Health %.1f\n", p1.health);

	return 0;
}