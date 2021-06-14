#include <stdio.h>
#include <unistd.h>

int	main()
{
	int		a;
	int		*ptr;
	

	a = 955;
	ptr = &a;
	printf("%d\n", *ptr);
	*ptr = 03;
	printf("%d\n", a);
	return (0);
}
