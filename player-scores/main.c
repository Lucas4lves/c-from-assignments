#include <stdio.h>
#include <stdlib.h>

#define TEAM_SIZE 5
#define GAMES_MAX 2 

typedef struct{
	int score;
}Player;

typedef struct {
	Player * players;
	float average_score;
}Game;

Player new_player(){
	Player p;
	p.score = 0;

	return p;
}

Game new_game(){
	//Creating a pointer
	Game g;
	//Initializing fields
	g.players = malloc(sizeof(Player) * TEAM_SIZE);
	g.average_score = 0;

	for(int n = 0; n < TEAM_SIZE; n++){
		g.players[n] = new_player();
	}
	//returning the pointer
	return g; 
}

Game * initialize_games(int n){
	if(n > GAMES_MAX){
		printf("Tried to initialize more games than maximum amount\n");
		exit(1);
	}
	Game * games;
	games = malloc(sizeof(Game) * n);
	for(int i = 0; i < n; i++){
		games[i] = new_game();
	}

	return games;
}

int main(){
	Game * games = initialize_games(GAMES_MAX);
	int score = 0;	
	int temp_score_sum = 0;
	int pause = 0;

	system("clear");
	for(int a = 0; a < GAMES_MAX; a++){
		for(int p = 0; p < TEAM_SIZE; p++){
			printf("[GAME %d] Player %d Score: ", a + 1, p + 1);
			scanf("%d", &score);
			games[a].players[p].score = score;
			temp_score_sum += score;
		}
		games[a].average_score = (float)temp_score_sum/(float)TEAM_SIZE;
		printf("Game %d  AVG SCORE: %.2f\n", a + 1, games[a].average_score);
		printf("Press anything to continue\n");
		scanf("%d", &pause);
		temp_score_sum = 0;
		system("clear");
	}
	free(games);
	return 0;
}
