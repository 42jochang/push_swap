# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/25 15:51:33 by jochang           #+#    #+#              #
#    Updated: 2018/09/05 22:48:56 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker

PUSH_SWAP = push_swap

UTIL = util/ft_lstpush.c \
	util/ft_lstswp.c \
	util/ft_lstrot.c \
	util/ft_lstrevrot.c \
	util/ft_exit.c \
	util/ft_lstfree.c \
	util/ft_lstend.c \
	util/ft_lstprint.c \
	util/ft_lstmax.c \
	util/ft_lstmin.c \
	util/ft_lstsize.c \
	util/ft_lstsorted.c \

SRC = src/parse_args.c \
	src/parse_stdin.c \
	src/dupe_check.c \
	src/fdis.c \
	src/get_flags.c \
	src/sorting_hat.c \
	src/action.c \
	src/loop_n.c \
	src/quarter_sort.c \
	src/back_to_a.c \
	src/mini_sort.c \
	src/medium_sort.c \

CMD = cmd/ps.c \
	cmd/rr.c \
	cmd/rrr.c

CSRC = src/checker.c
PSRC = src/push_swap.c

INC = inc

GCC = gcc
CFLAGS = -Wall -Wextra -Werror
LFT = libft/libft.a

all: $(PUSH_SWAP)

$(PUSH_SWAP):
	@echo "\033[32mmaking libft...\033[0m"
	@make -C libft
	@echo "\033[32mmaking checker...\033[0m"
	@$(GCC) $(CFLAGS) -o $(CHECKER) $(UTIL) $(SRC) $(CMD) $(CSRC) -I $(INC) $(LFT)
	@echo "\033[32mmaking push_swap...\033[0m"
	@$(GCC) $(CFLAGS) -o $(PUSH_SWAP) $(UTIL) $(SRC) $(CMD) $(PSRC) -I $(INC) $(LFT)

clean:
	@echo "\033[33mcleaning repository...\033[0m"
	@make -C libft clean

fclean: clean
	@echo "\033[33mremoving executables...\033[0m"
	@make -C libft fclean
	@rm -f $(CHECKER) $(PUSH_SWAP)

re: fclean all
