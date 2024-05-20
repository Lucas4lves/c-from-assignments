#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TEAM_SIZE 2

typedef struct {
	int 	id; 
	char 	fName[50];
	char 	lName[50];
	int 	ssn;
	char 	title[50];
}Employee;

typedef struct{
	Employee * 	members;
}Duo;

Employee new_empl(int id, char* first_name, char* last_name, int ssn, char* title);
Duo new_duo();
void print_creds(Employee *e);
Employee register_employee();
void flush_stdin();
int main(int argc, char* argv[]){
	Duo d = new_duo();
	Employee x = register_employee();
	Employee y = new_empl(2, "Travis", "Baker", 7876, "Singer/Songwriter");

	d.members[0] = x;
	d.members[1] = y;

	for(int c = 0; c < TEAM_SIZE; c++){
		print_creds(&d.members[c]);
	}	

	free(d.members);
	return 0;
}

Employee new_empl(int id, char* first_name, char* last_name, int ssn, char* title){
	Employee e;
	e.id = id;
	strcpy(e.fName, first_name);
	strcpy(e.lName, last_name);
	strcpy(e.title, title);
	e.ssn = ssn;

	return e;
}

Duo new_duo(){
	Duo d;
	d.members = NULL;
	d.members = malloc(sizeof(Employee) * 2);

	return d;
}

void print_creds(Employee *e){
	printf("Id: %d, First Name: %s, Last Name: %s, ssn: %d, title: %s\n", e->id, e->fName, e->lName, e->ssn, e->title);
}

void flush_stdin(){
	int c;
	while((c = getchar()) != '\n'){}
}

Employee register_employee(){
	int id; 
	char first_name[50];
	char last_name[50];
	int ssn;
	char title[50];

	Employee e;
	printf("Enter employees ID: \n");
	scanf("%d", &id);
	
	flush_stdin();

	printf("Enter employees first name: \n");
	scanf("%s", first_name);
	flush_stdin();
	printf("Enter employees last name: \n");
	scanf("%s", last_name);
	//fgets(last_name, 50, stdin);
	flush_stdin();
	printf("Enter employees ssn: \n");
	scanf("%d", &ssn);
	//fgets(ssn, 5, stdin);
	flush_stdin();
	printf("Enter employees title: \n");
	scanf("%s", title);
	//fgets(title, 50, stdin);

	e = new_empl(id, first_name, last_name, ssn, title);
	return e;
}
