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

NAME	= bureaucrat

FLAGS	= -std=c++98 -Wall -Wextra -Werror -I./$(HDIR)

SRCDIR	= sources/

OBJDIR	= objects/

HDIR	= headers/

HDRS	= Bureaucrat.hpp Form.hpp general.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp

PHDR	= $(addprefix $(HDIR), $(HDRS))

SRC		= Bureaucrat.cpp GradeTooHighException.cpp GradeTooLowException.cpp \
			Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp NotSignedException.cpp

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
