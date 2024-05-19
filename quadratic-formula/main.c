#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
	float x1;
	float x2;
}QuadraticResult;

int error = 0;

QuadraticResult quadratic_formula(int a, int b, int c){
	QuadraticResult res;	
	
	int minus_b = -b;
	int four_a_c = 4 * (a) * (c);
	int two_a = 2 * a;
	int discriminant = ((b * b) - four_a_c);

	printf("Discriminant: %d\n", discriminant);

	if(discriminant < 0){
		error = 1;
		res.x1 = 0; 
		res.x2 = 0;
		return res;
	}

	if(discriminant > 0){
		int temp1 = minus_b + sqrt(discriminant);
		int temp2 = minus_b - sqrt(discriminant);

		res.x1 = (float)temp1/two_a;
		res.x2 = (float)temp2/two_a;

		return res;
	}

	int temp1 = minus_b + sqrt(discriminant);

	res.x1 = (float)temp1/two_a;
	res.x2 = res.x1;

	return res;
}

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 4;
	int c = 3;

	QuadraticResult q = quadratic_formula(a, b, c);
	if(error == 0){
		printf("x1: %.f\n", q.x1);
		printf("x2: %.f\n", q.x2);
		return 0;
	}

	printf("There is no solution in Real Numbers for such input [%d, %d, %d]\n", a, b, c);
	return 1;
}
