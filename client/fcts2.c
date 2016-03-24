/*
** fcts.c for  in /home/faure_k/b2/unix/PSU_2015_minitalk
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Tue Feb  2 16:45:53 2016 maxence faure
** Last update Thu Feb 11 10:56:11 2016 maxence faure
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}


int     my_getnbr(char *str)
{
  int   nbr;
  int   k;

  nbr = 0;
  k = 0;
  while (str[k] != 0)
    {
      if (str[k] < 57 && str[k] > 48)
        {
          nbr = nbr * 10 + (str[k] -48);
        }
      k = k + 1;
    }
  if (str[0] == '-')
    {
      nbr = nbr * -1;
    }
  return (nbr);
}

int     my_putnbr(int nb)
{
  int   m;
  int   p;

  p = -2147483648;
  m = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == p)
        {
          nb = p - 1;
          m = 1;
        }
      nb = -nb;
    }
  if (nb > 9)
    {
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + 48 + m);
    }
  else
    my_putchar(nb + 48);
  return (0);
}
