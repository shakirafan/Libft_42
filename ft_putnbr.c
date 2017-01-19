void	ft_putchar(char c);

void	ft_putnbr(long int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = n * - 1;
	}
	if(n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
