#include <stdio.h>
#include <string.h>
#include <Windows.h>


/**
* Description : Term 2 - AY2526, KANAGAWA PREFECTURAL CHAMPIONSHIP: BASKETBALL LEAGUE MANAGER
* Author/s : PANGAN, HANS MARTIN Y.
* <student2 full name (last name, first name)>
* Section : S14
* Last Modified : March 3, 2026
* Acknowledgments : N/A
*/

/* preprocessor directives> */
#include <stdio.h>
#include <string.h>
#include <Windows.h>
/* definitions (i.e., constants, typedefs, structs) */

/* function implementations */
/*
STRUCTURES.
*/

struct Player{
	char name[50]; 
	int jersey; 
	int totalPoints;
	int totalRebounds;
	int totalAssists;
	float pointsAvg;
	float reboundsAvg;
	float assistsAvg;
	int gamesPlayed;
};

struct Player player[20];

struct Team{
	char name[50];
	struct Player lineup[5];
	float wins;
	float losses;	
};



struct GameRecord{
	int gameId;
	char team1Name[50];
	char team2Name[50];
	int team1Score;
	int team2Score;

};

/*
STRUCTS END
*/
void showDivider(){
	printf("===========================================================\n");
}
int showHomeScreen(){ 
	
	int temp = 0;
	
	showDivider();
	printf("	KANAGAWA PREFECTURAL CHAMPIONSHIP		\n");
	showDivider();
	
	printf("	[1] THE TIP OFF (SIMULATE GAME)\n");
	printf("	[2] THE ROAD TO NATIONALS (STANDINGS)\n");
	printf(" 	[3] TEAM SCOUTING REPORT (AVERAGES)\n");
	printf("	[4] ACE PLAYER DATA (PLAYER STATS)\n");
	printf(" 	[5] TOURNAMENT SCOREBOOK (HISTORY)\n");
	printf(" 	[6] MVP RACE CANDIDATES\n");
	printf("	[7] RIVALRY CHECK (HEAD-TO-HEAD)\n");
	printf(" 	[8] VIEW BOX SCORE \n");
	printf("	[9] LEAVE THE COURT (EXIT!)\n");
	
	showDivider();
	
	printf("ENTER CHOICE: ");
	scanf("%d", &temp);
	
	return temp;
}

void secondCase(struct Team team[]){ //Should input team

system("cls");
showDivider();
printf("		TEAM STANDING		\n");
showDivider();

printf("\n");
printf("+-------+-----------------+-------+-------+---------+\n");
printf("| RANK  | TEAM            | WINS  | LOSS  | WIN     |\n");
printf("+-------+-----------------+-------+-------+---------+\n");
//printf("| %d     | %s          | %d     | 0     | %.1f %% |\n", 1, "Ryonan", 1, 0, 100.0);
//}

for (int i = 0; i < 4; i++) {
        float winPct = (team[i].wins / (team[i].wins + team[i].losses)) * 100.0;
        printf("| %d     | %-15s | %-5.0f | %-5.0f | %6.1f %% |\n",
               i+1, team[i].name, team[i].wins, team[i].losses, winPct);
    }

}



/*
MAIN!
*/
int main()
{
	int nChoice = 0;
	int nValidator = 0;




//	showHomeScreen(nChoice);
//	nChoice = showHomeScreen(nChoice);
//	printf("DEBUG nChoice = [%d]\n", nChoice);





struct Team team[4];
strcpy(team[0].name, "Ryonan");
strcpy(team[1].name, "Shohoku");
strcpy(team[2].name, "Kainan");
strcpy(team[3].name, "Shoyo");

team[0].wins = 10; team[0].losses = 2; //Ryonan
team[1].wins = 8;  team[1].losses = 4; //Shohoku
team[2].wins = 6;  team[2].losses = 6; //Kainan
team[3].wins = 12; team[3].losses = 1; //Shoyo

	
	do	{
		nChoice = showHomeScreen();
		printf("DEBUG nChoice = [%d]\n", nChoice);
		if (nChoice > 9 || nChoice < 1){
			printf("not valid debug! pick a valid number debug!\n");
			nValidator = 0;
			sleep(1);
			system("cls");
		} else{
			nValidator = 1;
			
		}
	}while (nValidator == 0);
	

	switch(nChoice){
		case 1:
			printf("Debug %d\n", nChoice);
			break;
		case 2:
			printf("Debug %d\n", nChoice);
			secondCase(team);
			break;
		case 3:
			printf("Debug %d\n", nChoice);
			break;
		case 4:
			printf("Debug %d\n", nChoice);
			break;
		case 5:
			printf("Debug %d\n", nChoice);
			break;
		case 6:
			printf("Debug %d\n", nChoice);
			break;
		case 7:
			printf("Debug %d\n", nChoice);
			break;
		case 8:
			printf("Debug %d\n", nChoice);
			break;
		case 9:
			printf("Debug %d\n", nChoice);
			break;
}
	

 return 0;
}
/**
* This is to certify that this project is my/our own work, based on my/our personal
* efforts in studying and applying the concepts learned. I/We have constructed the
* functions and their respective algorithms and corresponding code by myself/ourselves.
* The program was run, tested, and debugged by my/our own efforts. I/We further certify
* that I/we have not copied in part or whole or otherwise plagiarized the work of
* other students and/or persons.
*
* <student1 full name (last name, first name)> (DLSU ID# <number>)
* <stud

**/