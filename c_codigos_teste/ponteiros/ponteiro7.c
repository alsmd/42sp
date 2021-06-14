#include <stdio.h>
#include <unistd.h>
void write_string(char* string);
//Lista de funcionarios, cada funcionario tem um dado nome, idade e cargo
int	main()
{
	char	funcionario[101];
	int		count;
	char	teste;

	read(1, funcionario, 101);
	write_string(funcionario);
}

void write_string(char* string){
	int count = 0;
	while((*(string + count)) != '\0'){
		write(1, string + count , 1);
		count++;
	}
	write(1, "\n", 1);

}