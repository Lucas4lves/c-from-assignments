#include<stdio.h>

int main(int argc, char* argv[]){
	int numbs[10];
	
	unsigned long size_of_int = sizeof(int);
	unsigned long qtt = sizeof(numbs)/size_of_int;

	printf("The array has %lu elements\n", qtt);

	return 0;
}

