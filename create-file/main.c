#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	//TODO(LUCAS): Learn about the open() function!
	//Here we're gonna write a program that's able to create a file
	int file_descriptor;	

	if((file_descriptor = open("dummy.txt", O_WRONLY | O_CREAT, S_IRWXU) < 0)){
		printf("Failed to create or open such file \n");
		return 1;
	}

	printf("File creation successful\n");
	
	return 0;	
}
