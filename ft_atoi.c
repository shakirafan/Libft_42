int		ft_atoi(const char *str)
{
	int i;
	int stock;
	int sign;

	i = 0;
	stock = 0;
	sign = 1;
	while(*(str + i) == '\v' ||
			*(str + i) == '\t' ||
			*(str + i) == '\r' ||
			*(str + i) == '\n' ||
			*(str + i) == ' ' ||
			*(str + i) == '\f')
			i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		stock = stock * 10 + (*(str + i) - '0');
	return (stock * sign);
}