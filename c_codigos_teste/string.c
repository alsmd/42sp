#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*teste;
	char	teste2[3];
	int indice = 0;

	teste = "oi";
	//strcpy(teste2, teste);
	teste2[0] = teste[0];
	teste2[1] = teste[1];
	teste2[2] = teste[2];
	while(teste2[indice] != '\0')
	{
		printf("%c \n", teste2[indice]);
		indice++;
	}

	return (0);
}
