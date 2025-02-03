# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almudenalopezrodriguez <almudenalopezro    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 11:43:09 by almlopez          #+#    #+#              #
#    Updated: 2025/02/03 11:35:41 by almudenalop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strnstr.c ft_strncmp.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_memchr.c\
	ft_memcmp.c ft_memcpy.c ft_memset.c ft_memmove.c ft_bzero.c ft_calloc.c\
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c ft_striteri.c\
	ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.cc
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all