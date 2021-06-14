#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *table;
	int indice;

	indice = 0;
	table = (int*) malloc(4 * 4);
	while (indice <= 3)
	{
		table[indice] = indice;
		indice++;
	}
	indice--;
	free(table);
	/* while (indice >= 0)
	{
		printf("%p---%d\n", &table[indice], table[indice]);
		indice--;
	} */

	return (0);
}
