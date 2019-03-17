#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ollevche <ollevche@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 13:37:28 by ollevche          #+#    #+#              #
#    Updated: 2018/10/01 13:37:29 by ollevche         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= sc4v-tp

FLAGS	= -std=c++98 -Wall -Wextra -Werror -I./$(HDIR)

SRCDIR	= sources/

OBJDIR	= objects/

HDIR	= headers/

HDRS	= FragTrap.hpp ScavTrap.hpp

PHDR	= $(addprefix $(HDIR), $(HDRS))

SRC		= FragTrap.cpp ScavTrap.cpp main.cpp

OBJ		= $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(PHDR) $(OBJDIR) $(OBJ)
	clang++ -o $(NAME) $(OBJ) $(FLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJ): $(OBJDIR)%.o :  $(SRCDIR)%.cpp $(PHDR)
	clang++ -o $@ -c $< $(FLAGS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
