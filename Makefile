# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 05:17:25 by aamssafi          #+#    #+#              #
#    Updated: 2022/06/25 00:20:07 by aamssafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = check_errors.c  push_swap.c fon_help.c moves.c moves2.c moves3.c \
	 sort_2.c sort_3.c sort_4.c sort_5.c radix_sort.c small_sort.c

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(OBJS)
fclean :
	@rm -rf $(NAME) $(OBJS)
re : fclean all