#include <stdio.h>
#include <unistd.h>

int	main()
{
	int		b;
	int		a;
	int		*ptr1;
	int		*ptr2;

	
	a = 552;
	b = 999;
	ptr1 = &a;
	ptr2 = &b;
	printf("%p \n", ptr1);
	printf("%d \n", *(ptr1 + 1));
	printf("%p \n", ptr2);


	return (0);
}
