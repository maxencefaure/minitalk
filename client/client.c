/*
** client.c for  in /home/faure_k/b2/unix/PSU_2015_minitalk
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Mon Feb  8 17:11:39 2016 maxence faure
** Last update Wed Feb 17 15:19:38 2016 maxence faure
*/

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
  int	i;
  int	x;
  int	p;
  int	pi;

  i = 0;
  x = 0;
  p = 0;
  pi = my_getnbr(av[1]);
  if (ac != 3)
    return (0);
  while (i < my_strlen(av[2]))
    {
      p = 0;
      x = 0;
      while (x++ < 8)
	{
	  usleep(1000);
	  if ((av[2][i] >> p++) & 1 == 1)
	    kill(pi, SIGUSR1);	
	  else
	    kill(pi, SIGUSR2);
	}
      i = i + 1;
    }
}
