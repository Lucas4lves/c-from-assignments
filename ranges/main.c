#include<stdio.h>

int error = 0;

int get_int(){
	int out;
	printf("Enter a number\n");
	scanf("%d", &out);

	return out;
}

void get_range(int choice){
	if(choice > 1 && choice <= 100){
		printf("Choice is within range 1 - 100\n");
		return;
	}

	if(choice > 100 && choice <= 200){
		printf("Choice is within range 101 - 200\n");
		return;
	}

	if(choice > 200 && choice <= 300){
		printf("Choice is within range 201 - 300\n");
		return;
	}


	if(choice > 300 && choice <= 400){
		printf("Choice is within range 301 - 400\n");
		return;
	}


	if(choice > 400 && choice <= 500){
		printf("Choice is within range 401 - 500\n");
		return;
	}

	printf("Choice is out of range!\n");
}

int main(int argc, char * argv[]){
	int opt = get_int();	
	printf("Choice: %d\n", opt);

	get_range(opt);
}
