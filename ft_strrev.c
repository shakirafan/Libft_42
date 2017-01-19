
char *ft_strrev(char *str)
{
	int end;
	int start;
	int swap;
	
	end = 0;
	start = 0;
	swap = 0;
	while(str[end] != '\0')
		end++;
	end--;
	while(end >= start)
	{
		swap = str[end];
		str[end] = str[start];
		str[start] = swap;
		end--;
		start++;
	}
	return(str);
}
