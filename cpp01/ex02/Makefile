# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florianprado <florianprado@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 18:34:35 by florianprad       #+#    #+#              #
#    Updated: 2023/01/27 18:49:03 by florianprad      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

PROJECT := brain

HEADER_SRCS := 

SRCS := main.cpp

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