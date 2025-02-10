# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 20:23:15 by ozamora-          #+#    #+#              #
#    Updated: 2024/11/09 17:33:34 by ozamora-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libftprintf.a

# Compiler and its flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library archiver and its flags
AR = ar
ARFLAGS = rcs

# Source files
SRC = ft_printf.c ft_strlen.c\
	  ft_putchar.c ft_putstr.c ft_putptr.c \
	  ft_putnbr.c ft_putnbr_base.c ft_putnbr_unsigned.c \

# List of object files, replace .c with .o
OBJ = $(SRC:.c=.o)

# Header
INCLUDE = ft_printf.h

# Default rule to create the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	
# Rule to compile object files from source files
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean generated files
clean:
	rm -f $(OBJ) *.out *gch

# Rule to clean generated files and the executablle
fclean: clean
	rm -f $(NAME)

# Rule to recompile from zero. 
re: fclean all

# Phony targets
.PHONY: all clean fclean re