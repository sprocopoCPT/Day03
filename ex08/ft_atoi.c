int ft_atoi(char *str)
{
	int new_int = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		new_int = new_int*10 + (str[i] - '0');
		i++;
	}

	return sign*new_int;
}