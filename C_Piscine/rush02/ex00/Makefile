NAME = rush-02
FLAGS = -Wextra -Wall -Werror

$(NAME) : main.o ft_create_array.o checking_arguments.o checking_array.o
	@gcc $(FLAGS) main.o ft_create_array.o checking_arguments.o checking_array.o -o $(NAME)
	@echo "Archivos creados"

main.o : main.c
ft_create_array.o : ft_create_array.c
checking_array.o : checking_array.c
checking_arguments.o : checking_arguments.c


.PHONY: clean fclean
fclean:
	rm -f rush-02
clean :
	@rm -f *.o rush-02
	@echo "Archivos eliminados"

