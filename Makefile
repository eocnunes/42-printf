# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 13:30:05 by enunes            #+#    #+#              #
#    Updated: 2017/09/18 13:44:15 by enunes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -g -I

SRC_DIR = src/

LFT_DIR = libft/

SRCS = ft_printf.c \

LFT_SRCS = 

PFSR = $(addprefix $(SRC_DIR), $(SRCS))

LFSR = $(addprefix $(LFT_DIR), $(LFT_SRCS))

POBJ = $(PFSR:.c=.o)
LOBJ = $(LFSR:.c=.o)

all: $(NAME)

$(POBJ): %.o: %.c
	@gcc -c $(CFLAGS) $(SRC_DIR) $< -o $@

$(LOBJ): %.o: %.c
	gcc -c $(CFLAGS) $(LFT_DIR) $< -o $@

$(NAME): $(POBJ) $(LOBJ)
	@ar rcs $(NAME) $(POBJ) $(LOBJ)
	@echo "\033[32mft_printf Created\033[0m"

clean:
	@rm -rf $(SRC_DIR)*.o
	@rm -rf $(LFT_DIR)*.o $(LFT_DIR)libft.a
	@echo "\033[31mft_printf Removed\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mft_printf Removed\033[0m"

re: fclean all
