# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouhaba <mbouhaba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 07:25:04 by iel-mach          #+#    #+#              #
#    Updated: 2022/06/18 20:24:05 by mbouhaba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = gcc
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
SRCS = push_swap.c push_swap_utils.c ft_atoi.c move_s.c move_r.c move_push.c sort234.c sort_5.c sort_100.c utils_sort_cent.c utils_sort_cent2.c utils_sort_five.c linked_list.c initial.c
SRCBONUS = push_swap_utils.c linked_list.c ./checker_bonus/checker.c ./checker_bonus/get_next_line.c ./checker_bonus/get_next_line_utils.c sort234.c sort_5.c move_push.c \
move_r.c move_s.c ft_atoi.c utils_sort_cent.c utils_sort_cent2.c utils_sort_five.c sort_100.c ./checker_bonus/checker_utils.c initial.c

OBJ = ${SRC:.c=.o} 
OBJBONUS = ${SRCBONUS:.c=.o}

all : $(NAME)
bonus : $(NAME_BONUS)

$(NAME): $(SRCS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)
$(NAME_BONUS) : $(SRCBONUS)
		$(CC) $(FLAGS) $(SRCBONUS) -o $(NAME_BONUS)
clean :
	rm -f $(OBJ) $(OBJBONUS)
fclean : clean
	 rm -f $(NAME) $(NAME_BONUS)
re : fclean all