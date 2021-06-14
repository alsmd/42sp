#include <stdio.h>
typedef struct {
	char *name;
	int age;
	char *adress;
} person;
typedef int INTEGER;
int	main(void)
{
	INTEGER teste = 15;
	person camper1;
	person camper2;
	camper1.name = "Flavio";
	camper1.age  = 18;
	camper1.adress = "São Paulo";

	camper2.name = "Jhonatan";
	camper2.age  = 25;
	camper2.adress = "São Paulo";
	printf("%s\n", camper1.name);
	printf("%d\n", camper1.age);
	printf("%s\n", camper1.adress);
	printf("%s\n", camper2.name);
	printf("%d\n", camper2.age);
	printf("%s\n", camper2.adress);
	printf("%d\n", teste);
	/* person.name = "Joao";
	printf("%s \n", person.name); */
	return (0);
}
