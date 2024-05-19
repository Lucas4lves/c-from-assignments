#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_flips_qtt(){
	int flip_count = 0;
	printf("How many coin flips to you want to simulate? \n");
	
	scanf("%d", &flip_count);

	return flip_count;
}

int main(){
	int flip_qtt = get_flips_qtt();
	int coinflips[flip_qtt]; 

	if(flip_qtt <= 0){
		printf("Make sure to provide a positive count for flips \n");
		exit(1);
	}

	srand(time(0));
	for(int c = 0; c < flip_qtt ; c++){
		int rand_n = rand() % 100; 

		coinflips[c] = rand_n;
	}

	printf("Flips count : %d\n", flip_qtt);
	
	for(int k = 0; k < flip_qtt; k++){
		printf("Flip %d : %d \n", k + 1, coinflips[k]);
	}
}

