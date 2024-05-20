#include <stdio.h>
#include <stdlib.h>

#define GAMES_TOTAL 5
typedef struct {
	int points;
	int games;
}Player;

void flush_stdin(){
	int c;
	while((c = getchar()) != '\n'){}
}

Player new_player(int pts, int gms){
	Player p;

	p.points = pts;
	p.games = gms;

	return p;
}

float calculate_avg_score(int sc, int ng){
	float output;
	
	output = ((float)sc/(float)ng);

	return output;
}

int main(){
	Player players[5];
	int pts;
	int gms; 
	for(int g = 0; g < GAMES_TOTAL; g++){
		printf("Enter player %d's points total: ", g + 1);
		scanf("%d", &pts);
		flush_stdin();
		printf("Player %d's games total: ", g + 1);
		scanf("%d", &gms);
		players[g] = new_player(pts, gms);
		flush_stdin();
	}

	for(int k = 0; k < GAMES_TOTAL; k++){
		printf("Player %d's score avg was %.2f\n", k + 1, calculate_avg_score(players[k].points, players[k].games));

	}

	return 0;
}
