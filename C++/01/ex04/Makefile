NAME = sed

SRCS = main.cpp replace.cpp

OBJDIR = objs
OBJS = $(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCS))

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = \033[0;32m
NC = \033[0m

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "${GREEN}'$(NAME)' compiled.${NC}"

clean: 
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re