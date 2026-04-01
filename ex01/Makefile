# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/17 17:10:17 by edi-maio          #+#    #+#              #
#    Updated: 2026/04/01 18:54:57 by edi-maio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = phonebook
SRC_DIR = srcs/
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)Contact.cpp \
	   $(SRC_DIR)PhoneBook.cpp \
	   $(SRC_DIR)utils.cpp

OBJ_DIR = objs/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
