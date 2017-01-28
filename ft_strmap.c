char * ft_strmap(char const *s, char (*f) (char))
{
		int i;

		i = 0;
		
		while (s[i] != '\0')
		{
			f(s[i]);
			i++;
		}
}
