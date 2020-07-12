#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


char *ft_strrev(char *str)
{
	int strlen = 0;
	int i = 0;
	char *strrev = str;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	
	strlen--;

	while (strlen  >= 0)
	{
		strrev[i] = str[strlen];
		i++;
		strlen--;
	}

	return strrev;
}

int main(void)
{
	char *str = "hello there";
	ft_putstr(ft_strrev(str));
	return 0;
}