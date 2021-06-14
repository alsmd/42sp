#include <stdio.h>
#include <unistd.h>

int	main()
{
	int		a;
	int		*ptr1;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	
	a = 55;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;


	printf("%d \n", *****ptr5);
	return (0);
}
