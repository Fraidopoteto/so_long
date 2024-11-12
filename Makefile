# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 14:22:55 by joschmun          #+#    #+#              #
#    Updated: 2024/11/11 15:36:34 by joschmun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name des ausführbaren Programms
NAME = so_long

# Compiler und Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Quell- und Objektdateien
SRCS = main.c get_next_line.c read_map.c # Falls du mehrere Quell-Dateien hast, kannst du sie hier hinzufügen
OBJS = $(SRCS:.c=.o)

# Pfad zu libft
LIBFT_DIR = ./libft  # Verwende relativen Pfad
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = $(LIBFT_DIR)  # Pfad zu den Header-Dateien der Libft

# Regeln
all: $(LIBFT) $(NAME)

# Erstellen des ausführbaren Programms
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L$(LIBFT_DIR) -lft

# Kompilieren der libft
$(LIBFT):
	make -C $(LIBFT_DIR)

# Erstellen der Objektdateien
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_INC) -c $< -o $@

# Aufräumen der Objektdateien
clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

# Aufräumen der Objektdateien und der ausführbaren Datei
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

# Alles neu erstellen
re: fclean all

.PHONY: all clean fclean re
