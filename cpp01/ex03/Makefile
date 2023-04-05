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

CXX := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

PROJECT := human

HEADER_SRCS :=	inc/HumanA.hpp \
				inc/HumanB.hpp \
				inc/Weapon.hpp

SRCS :=	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp

OBJS := $(addprefix objs/, $(SRCS:.cpp=.o))

OBJS_DIRS := $(sort $(dir $(OBJS)))

INCLUDE := $(sort $(addprefix -I,$(dir $(HEADER_SRCS))))

NAME := $(PROJECT)

all: $(NAME)

$(NAME): Makefile $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

$(OBJS): | $(OBJS_DIRS)

$(OBJS_DIRS):
	mkdir -p $@

objs/%.o: src/%.cpp $(HEADER_SRCS)
	$(CXX) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	$(RM) $(NAME)
	@echo "[INFO] $(NAME) removed!"


ffclean:
	rm -rf $(OBJS_DIRS)
	$(RM) $(NAME)

re: fclean all

norme:
	@norminette

.PHONY: all clean fclean ffclean re norme