#include<stdio.h>

typedef struct{
	int value;
}Box;

int main(){

	Box b;	
	Box * ptr_b = &b;

	b.value = 3;	
	printf("Box b value: %d\n", b.value);
	
	(*ptr_b).value = 4;
	printf("Box b pointer value: %d\n", ptr_b->value);
	
	ptr_b->value = 7;
	printf("Box b -> value: %d\n", ptr_b->value);

	return 0;
}
