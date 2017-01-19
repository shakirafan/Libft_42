int		ft_isalpha(int n)
{
	if(n > 'z' || n < 'A' || (n > 'Z' && n < 'a'))
		return (0);
	else
		return (1);
}
