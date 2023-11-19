# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:04:57 by iouhssei          #+#    #+#              #
#    Updated: 2023/11/18 12:09:57 by iouhssei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
FLAGS = -Wall -Werror -Wextra
AR = ar crs
RM = rm -rf

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_strlen \
        ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
        ft_strnstr ft_strlcpy ft_strlcat ft_atoi ft_strdup \
        ft_substr ft_strjoin ft_split ft_itoa ft_strmapi \
        ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_isprint \
        ft_putnbr_fd ft_strtrim ft_memcpy ft_memmove ft_memset \
        ft_memcmp ft_memchr ft_bzero ft_calloc ft_striteri

BFILES = ft_lstnew ft_lstadd_front \
         ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
         ft_lstclear ft_lstiter

OBJ = $(FILES:=.o)
BOBJ = $(BFILES:=.o)

NAME = libft.a

YELLOW = \033[1;33m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)CLEAN AS NEW$(RESET)"
	$(RM) $(OBJ) $(BOBJ)

bonus: $(BOBJ)
	$(AR) $(NAME) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
