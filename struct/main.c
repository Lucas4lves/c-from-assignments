#include <stdio.h>

typedef struct {
	int id;
	char* tag;
	float healthpoints;
}Character;

int main(){

	Character c;
	c.id = 1;
	c.tag = "Chrono";
	c.healthpoints = 3.5;

	printf("Id: %d, Tag: %s, Healthpoints: %.2f\n", c.id, c.tag, c.healthpoints);

	return 0;
}
