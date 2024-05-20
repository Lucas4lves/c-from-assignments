#include <stdio.h>
#include <stdlib.h>

int main(){
	char * str = NULL;

	str = malloc(sizeof(char) * 10);

	if(str == NULL){
		printf("Failed to allocate mmry\n");
		return 1;
	}

	printf("Hooray! Size of str %lu \n", sizeof(str));

	free(str);
}

