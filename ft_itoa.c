char *ft_strrev(char *str)
{
	int stock;
	int i;
	int a;

	a = 0;
	i = 0;
	stock = 0;
	while (str[i] != '\0')
		i++;
	i--;
	if (str[a] == '-')
		a++;
	while (i >= a)
	{
		stock = str[i];
		str[i] = str[a];
		str[a] = stock;
		i--;
		a++;
	}
	return (str);
}
int		ft_length(int c)
{
	int i;

	i = 1;
	
	if (c < 0)
		c = c * - 1;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(long int n)
{
	char *tab;
	int i;

	i = 0;
	tab = (char *)malloc(sizeof(*tab) * ft_length(n) + 1);
	if (n < 0)
	{
		n = n * - 1;
		tab[i] = '-';
		i++;
	}
	while (n > 9)
	{
		tab[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	tab[i] = n + 48;
	i++;
	tab[i] = '\0';
	ft_strrev(tab);
	return (tab);
}
