# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yant <yant@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 13:10:00 by yant              #+#    #+#              #
#    Updated: 2024/11/01 13:10:19 by yant             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
      ft_isprint.c ft_memchr.c ft_memcmp.c ft_striteri.c\
      ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c\
      ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
      ft_strchr.c ft_strlcpy.c ft_strmapi.c\
      ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c\
      ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c\
      ft_strnstr.c ft_strrchr.c ft_strjoin.c\
      ft_tolower.c ft_toupper.c ft_strlcat.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
