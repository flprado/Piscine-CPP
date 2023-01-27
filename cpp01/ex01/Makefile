# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florianprado <florianprado@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 18:01:45 by florianprad       #+#    #+#              #
#    Updated: 2023/01/27 18:09:28 by florianprad      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./src/zombie.cpp \
				./src/main.cpp \
				./src/zombieHorde.cpp

INCLUDES	=	./inc/zombie.hpp \

HEAD		=	./inc

NAME		= Zombie

CC			= clang++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
		@${CC} ${CFLAGS} -I${HEAD} -c $< -o ${<:.cpp=.o}
		@echo "${GREEN}[ OK ]	${ORANGE}${<:.s=.o}${NC}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${HEAD} -o ${NAME} $(OBJS)
			@echo "${GREEN}Zombie program	has been created\n${NC}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}Zombie program	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re