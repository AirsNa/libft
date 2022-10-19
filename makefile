FLAGS = -Wall -Werror -Wextra

NAME =  libft.a

$(NAME) all:
	gcc $(FLAGS) -c *.c
	mv ft*.o temp/
	ar -rc libft.a ./temp/ft*.o
	ranlib libft.a

clean:
	rm -f temp/ft*.o

bonus:	all

fclean: clean
	rm -f libft.a

re: fclean all
