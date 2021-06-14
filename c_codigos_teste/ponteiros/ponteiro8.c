#include <stdio.h>
#include <unistd.h>
void write_string(int *string);
int	main()
{
	int teste = 97;

	write(1, &teste, 1);
	write(1, "\n", 1);
	write_string(&teste);
	write(1, &teste, 1);
}

void write_string(int *string){
	*string = *string + 2;
}