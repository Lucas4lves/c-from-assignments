#include<stdio.h>

int main(){
	int variable = 2;
	int * ptr_to_variable = &variable;

    printf("The value of int variable is: %d\n", variable);
    printf("The value of the pointer to the int variable is: %p\n", ptr_to_variable);
    printf("The memory address of the int variable is: %p\n", &variable);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr_to_variable);

	return 0;
}
