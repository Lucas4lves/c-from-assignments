#include<stdio.h>

int main(){
	int arr[10];

	for (int a = 0; a < 10; a++){
		printf("Value of index %d: %d\n", a, arr[a]);
	}
	
	printf("%p", arr);

	printf("\n");
	printf("Size of arr: %lu\n", sizeof(arr));
}
