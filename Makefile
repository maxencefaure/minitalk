##
## Makefile for  in /home/faure_k/b2/unix/PSU_2015_minitalk
## 
## Made by maxence faure
## Login   <faure_k@epitech.net>
## 
## Started on  Tue Feb  2 16:45:28 2016 maxence faure
## Last update Wed Feb 17 14:18:06 2016 maxence faure
##

NAME_1          =	client/client

NAME_2          =	server/server

SRC_1           =	client/client.c\
			client/fcts2.c

SRC_2		=	server/server.c\
			server/fcts.c

OBJ_1 =		$(SRC_1:.c=.o)

OBJ_2 =		$(SRC_2:.c=.o)

all :           $(NAME_1) $(NAME_2)

$(NAME_1) :	$(OBJ_1)
		cc $(OBJ_1) -o $(NAME_1) -lm

$(NAME_2) :	$(OBJ_2)
		cc $(OBJ_2) -o $(NAME_2) -lm

clean :
		rm -f $(OBJ_1)
		rm -f $(OBJ_2)

fclean :
		rm -f $(NAME_1)
		rm -f $(NAME_2)

re :            fclean all

.PHONY : re all clean fclean
