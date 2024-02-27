NAME		=		NoYouNeedForm28BNot28C

CXX			=		c++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98 -g3

SRCS		=		main.cpp\
					./Class/Bureaucrat/Bureaucrat.cpp\
					./Class/AForm/AForm.cpp\
					./Class/PresidentialPardonForm/PresidentialPardonForm.cpp\
					./Class/RobotomyRequestForm/RobotomyRequestForm.cpp\
					./Class/ShrubberyCreationForm/ShrubberyCreationForm.cpp\

OBJS		=		$(SRCS:.cpp=.o)

all			:		$(NAME)

$(NAME)		:		$(OBJS)
					$(CXX)  $(CXXFLAGS) $(OBJS) -o  $(NAME)

clean		:
					rm -rf $(OBJS)

fclean		:		clean
					rm -rf $(NAME) *.txt

re			:		fclean all

.PHONY		:		all	clean	fclean	re

