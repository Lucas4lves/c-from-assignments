#include<stdio.h>
#include<stdlib.h>

#define SCORES_MAX_COUNT 10

void clear_screen(){
	system("clear");
}

int main(int argc, char* argv[]){
	int * scores = malloc(sizeof(int));
	int count = 0, score = 0;
	int option = 0;

	int running = 0;

	while(running == 0){
		clear_screen();
		if(count >= SCORES_MAX_COUNT){
			printf("You reached maximum count for scores\n");
			running = 1;
			break;
		}
		printf("Enter a score: [%d out of 10]\n", count + 1);
		scanf("%d", &score);

		scores[count] = score;

		printf("Do you wish to enter another score? Yes = 0; No = 1\n");
		scanf("%d", &option);
			
		if(option != 0){
			running = 1;
		}
		scores = realloc(scores, sizeof(int) * (count + 1));
		if(scores == NULL){
			printf("Failed to reallocate mmry\n");
			exit(1);
		}
		count ++;

		clear_screen();
	}

	printf("Finishing the program...\n");
	
	int sum = 0; 
	float mean = 0.0f;
	for(int k = 0; k < count; k++){
		printf("Score %d: %d\n", k + 1, scores[k]);
		sum += scores[k];
	}
	
	printf("Size of Scores Array in Bytes: %lu\n", sizeof(scores));
	mean = ((float)sum/(float)count);

	printf("Mean: %.2f\n", mean);
	
	printf("Freeing memory \n");

	free(scores);
	return 0;
}
