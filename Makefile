# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/06 08:50:56 by abrault           #+#    #+#              #
#    Updated: 2013/12/06 13:19:07 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRC = get_next_line.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I libft/includes/ -c get_next_line.c
	gcc -Wall -Wextra -Werror -I libft/includes/ -c main.c
	gcc -o test_gnl get_next_line.o main.o -L libft/ -lft

clean:
	rm -f get_next_line.o main.o

fclean:
	rm -f $(NAME)

re: clean fclean $(NAME)

