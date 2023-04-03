# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 09:11:07 by mtoof             #+#    #+#              #
#    Updated: 2023/02/22 16:36:18 by mtoof            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
S = ./src/
SRC = $Sdisplay.c $Sft_check.c $Sft_init.c $Spop.c $Spush_swap.c $Spush.c $Smovements_a.c $Sis_sorted.c \
		$Sless_or_five.c $Smovements_b.c $Sutils.c $Ssort.c $Sft_atol.c
HEADER = ./header
FLAGS = -Werror -Wextra -Wall
LIB = ./libft/libft.a

all : $(NAME)

$(NAME):
		make -C ./libft
		gcc $(FLAGS) $(SRC) -I$(HEADER) $(LIB) -o $@

clean:
		make clean -C ./libft

fclean: clean
		make fclean -C ./libft
		/bin/rm -f $(NAME)
re:		fclean	all