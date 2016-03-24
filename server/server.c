/*
** serveur.c for  in /home/faure_k/b2/unix/PSU_2015_minitalk
** 
** Made by maxence faure
** Login   <faure_k@epitech.net>
** 
** Started on  Mon Feb  8 17:11:46 2016 maxence faure
** Last update Fri Feb 19 17:24:20 2016 maxence faure
*/

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>

int	i;

void     aff_pid()
{
  pid_t pid;

  pid = getpid();
  my_putnbr(pid);
  my_putchar('\n');
}

void	choice(int sig)
{
  char	c;

  if (sig == SIGUSR1)
    c = c + (1 << i++);
  else
    c = c + (0 << i++);
  if (i == 8)
    {
      my_putchar(c);
      i = 0;
      c = 0;
    }
}

int	main()
{
  aff_pid();
  signal(SIGUSR1, choice);
  signal(SIGUSR2, choice);
  while (42);
}
