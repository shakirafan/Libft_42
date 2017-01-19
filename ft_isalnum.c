int		ft_isalnum(int n)
{
	if ((n >= 48 && n <= 57) || (n >= 65 && n <= 90) ||  (n >= 97 && n <= 122))
		return (1);
	else
		return(0);
}
