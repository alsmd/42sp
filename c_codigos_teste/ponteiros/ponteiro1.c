#include <stdio.h>
#include <unistd.h>

int	main()
{
	int		a;
	int		b;
	char	c;
	int		*ptr;
	int		*ptr2;
	char	*ptr3;
	int		**ptr4;

	ptr = &a;
	ptr2 = &b;
	ptr3 = &c;
	ptr4 = &ptr2;
	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	printf("%p\n", ptr3);
	printf("%p\n", ptr4);
	read(1, ptr3, 1);
	printf("%c\n",*ptr3);
	return (0);
}
