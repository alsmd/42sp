#include <stdio.h>

typedef struct{
	char *name;
	int year;
	char *color;
} car;
int	main(void)
{
	car carro;
	carro.name = "Gol";
	printf("%s\n", carro.name);
	return (0);
}
