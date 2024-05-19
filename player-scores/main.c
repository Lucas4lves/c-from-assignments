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
	int highest_score = 0;
	int temp_score_sum = 0;

	int game_index, player_index;

	system("clear");
	for(int a = 0; a < GAMES_MAX; a++){
		for(int p = 0; p < TEAM_SIZE; p++){
			printf("[GAME %d] Player %d Score: ", a + 1, p + 1);
			scanf("%d", &score);
			games[a].players[p].score = score;
			if(score > highest_score){
				highest_score = score;
				player_index = p;
			}
			temp_score_sum += score;
		}

		game_index = a;
		
		games[a].average_score = (float)temp_score_sum/(float)TEAM_SIZE;
		printf("Game %d  AVG SCORE: %.2f\n", a + 1, games[a].average_score);
		printf("Highest score: from Game %d - Player %d ->  %d\n", game_index + 1 , player_index + 1, highest_score);
		temp_score_sum = 0;
	}
	free(games);
	return 0;
}
