NAME = account

SRCS = Account.cpp tests.cpp

OBJDIR = objs
OBJS = $(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCS))

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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