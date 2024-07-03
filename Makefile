# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btoksoez <btoksoez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 14:20:21 by btoksoez          #+#    #+#              #
#    Updated: 2024/02/05 12:40:05 by btoksoez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = array_utils.c	\
		assign_rotations.c	\
		correct_rotations.c	\
		final_rotate.c	\
		info_utils.c	\
		operations.c	\
		parse_args.c	\
		push_cheapest.c	\
		main.c	\
		rotate_push.c	\
		stack_utils.c	\
		write_stderr.c	\
		sort_small.c


NAME = push_swap

CC = cc

LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a

CFLAGS = -g -Wall -Werror -Wextra

$(NAME): $(SRCS) $(LIBFT)
	@echo "Creating $(NAME)"
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)
	@echo "$(NAME) created."

all: $(NAME)

$(LIBFT):
	@$(MAKE) -sC $(LIBFTDIR)

clean:
	make -C $(LIBFTDIR) clean
	@echo "$(LIBFT) deleted."

fclean: clean
	make -C $(LIBFTDIR) fclean
	rm -rf $(NAME)
	@echo "$(LIBFT) & $(NAME) deleted."

re: fclean all

.PHONY: clean fclean re all libft
