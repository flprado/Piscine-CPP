# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fprado <fprado@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 18:34:35 by florianprad       #+#    #+#              #
#    Updated: 2023/01/28 16:10:11 by fprado           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NC = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./src/main.cpp \
				./src/HumanA.cpp \
				./src/HumanB.cpp \
				./src/Weapon.cpp
INCLUDES	=	 ./inc/HumanA.hpp \
				 ./inc/humanB.hpp \
				 ./inc/Weapon.hpp

HEAD		=	./

NAME		= human

CC			= c++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
		@${CC} ${CFLAGS} -I${HEAD} -c $< -o ${<:.cpp=.o}
		@echo "${GREEN}[ OK ]	${ORANGE}${<:.s=.o}${NC}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${HEAD} -o ${NAME} $(OBJS)
			@echo "${GREEN}human program	has been created\n${NC}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${NC}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}human program	deleted${NC}"

re :		fclean all

.PHONY:		all	clean	fclean re