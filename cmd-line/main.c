#include<stdio.h>

int main(int argc, char* argv[]){
	char* fName = argv[1];
	char* lName = argv[2];

	if(argc <= 2){
		printf("Too few arguments\n");
		return 1;
	}

	if(argc > 2){
		printf("Too many arguments\n");
		return 1;
	}

	printf("Hello, %s %s\n", fName, lName);
}
