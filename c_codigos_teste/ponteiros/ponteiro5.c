#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	tab[3];
	int	*ptr;

	tab[0] = 10;
	tab[1] = 20;
	tab[2] = 30;
	printf("%d\n", *(tab));
	printf("%d\n", *(tab + 1));
	printf("%d\n", *(tab + 2));
/* 	ptr = tab;
	*tab = 100;
	printf("%p\n", tab);
	printf("%d\n", *(ptr));
	printf("%d\n", *(ptr + 1));
	printf("%d\n", *(ptr + 2));
	printf("%p\n", &tab[0]);
	printf("%p\n", &tab[1]);
	printf("%p\n", &tab[2]); */
	return (0);
}
