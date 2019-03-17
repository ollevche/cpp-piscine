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

NAME	= z_horde

FLAGS	= -Wall -Wextra -Werror -I./$(HDIR)

SRCDIR	= sources/

OBJDIR	= objects/

HDIR	= headers/

SRC		= main.cpp Zombie.cpp ZombieHorde.cpp

OBJ		= $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	clang++ -o $(NAME) $(OBJ) $(FLAGS)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJ): $(OBJDIR)%.o : $(SRCDIR)%.cpp
	clang++ -o $@ -c $< $(FLAGS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
