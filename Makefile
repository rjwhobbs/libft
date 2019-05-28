# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 07:32:20 by rhobbs            #+#    #+#              #
#    Updated: 2019/05/28 09:52:18 by rhobbs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = ft_*.c 
OBJ = *.o 
INC = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(LOB)

fclean: clean
	rm -f $(NAME)

re: fclean all
