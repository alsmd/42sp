#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int numbers[] = {10, 20, 30, 40, 50};
	int count = 0;
	while(count < 5)
	{
		printf("%d \n", numbers[count]);
		count++;
	}
	return (0);
}
