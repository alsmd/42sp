#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	tab[3];
	int	tab2[2];
	int	*tab3[2];
	tab[0] = 10;
	tab[1] = 20;
	tab[2] = 30;

	tab2[0] = 1000;
	tab2[1] = 2000;

	tab3[0] = tab;
	tab3[1] = tab2;
	printf("%d\n", tab3[0][0]);
	printf("%d\n", *((*(tab3 + 1)) + 1));// tab3[1][1] == *((*(tab3 + 1)) + 1)
	return (0);
}
