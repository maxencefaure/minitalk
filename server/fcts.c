/*
** fcts.c for  in /home/faure_k/b2/unix/PSU_2015_minitalk
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Tue Feb  2 16:45:53 2016 maxence faure
** Last update Thu Feb 11 10:55:42 2016 maxence faure
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

int     my_getnbr(char *str)
{
  int   nb;
  int   i;

  nb = 0;
  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < 57 && str[i] > 48)
        {
          nb = nb * 10 + (str[i] -48);
        }
      i = i + 1;
    }
  if (str[0] == '-')
    {
      nb = nb * -1;
    }
  return (nb);
}

int     my_putnbr(int nb)
{
  int   min;
  int   p;

  p = -2147483648;
  min = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == p)
        {
          nb = p - 1;
          min = 1;
        }
      nb = -nb;
    }
  if (nb > 9)
    {
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + 48 + min);
    }
  else
    my_putchar(nb + 48);
  return (0);
}
