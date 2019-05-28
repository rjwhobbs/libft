# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 07:32:20 by rhobbs            #+#    #+#              #
#    Updated: 2019/05/21 10:30:28 by rhobbs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = ft_*.c 
OBJ = *.o 
INC = libft.h
LOB = *.h.gch

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) $(INC)
	ar rc $(NAME) $(OBJ) $(LOB)

clean:
	rm -f $(OBJ) $(LOB)

fclean: clean
	rm -f $(NAME)

re: fclean all
