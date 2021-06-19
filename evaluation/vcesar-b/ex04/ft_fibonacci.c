int	ft_fibonacci(int index)
{
	int	fib_1;
	int	fib_2;
	int	fib_n;

	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	fib_1 = 0;
	fib_2 = 1;
	fib_n = 1;
	if (index > 1)
		fib_n = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (fib_n);
}
