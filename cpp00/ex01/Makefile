CXX := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

PROJECT := phonebook

HEADER_SRCS :=	inc/contact.hpp \
				inc/general.hpp \
				inc/phonebook.hpp \

SRCS :=	phonebook.cpp	\

OBJS := $(addprefix .objs/, $(SRCS:.cpp=.o))

OBJS_DIRS := $(sort $(dir $(OBJS)))

NAME := $(PROJECT)

all: $(NAME)

$(NAME): Makefile $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

$(OBJS): | $(OBJS_DIRS)

$(OBJS_DIRS):
	mkdir -p $@

.objs/%.o: srcs/%.cpp $(HEADER_SRCS)
	$(CXX) $(CFLAGS) -c $< -o $@

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