#include <stdio.h>

int main(){
	//Not initialized variable
	int a = 19;
	int * ptr_a = &a;

	printf("Pointer value -> %d\n", *ptr_a);
	printf("Pointer address -> %p\n", ptr_a);

	return 0;
}
