
#include <unistd.h>

void ft_putchar(char c)
{
write (1, &c, 1);
}

void ft_putnbr(int nb)
{
  long i;
  i = nb;

  if (i < 0)
  {
    ft_putchar('-');
    i = i * (-1);
  }
  if (i > 9)
  {
    ft_putnbr(i / 10);
    ft_putnbr(i % 10);
  }
  else if (i < 10)
  {
    ft_putchar(i + '0');
  }
}


void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
int	*nbr;
*nbr = 42;


	ft_putnbr(*nbr);
	return 0;
}
