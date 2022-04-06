NAME	:=	push_swap

CC	:= gcc
CFLAGS	:=	-Wall -Wextra

DIR_SRCS	:=	srcs
DIR_OBJS	:=	.objs
DIR_INCS	:=	incs

LST_SRCS	:=	push_swap.c \
				index.c \
				algo.c \
				parsing.c \
				command.c \
				command2.c \
				utils.c	\
				sort_three.c \
				sort_five.c \
				sort.c \


LST_OBJS	:=	$(LST_SRCS:.c=.o)

LST_INCS	:=	push_swap.h

SRCS	:=	$(addprefix $(DIR_SRCS)/,$(LST_SRCS))
OBJS	:=	$(addprefix $(DIR_OBJS)/,$(LST_OBJS))
INCS	:=	$(addprefix $(DIR_INCS)/,$(LST_INCS))

all: $(NAME)	

$(NAME): $(OBJS) $(INCS) Makefile 
	$(CC) $(CFLAGS) $(OBJS) -o $@ -I $(DIR_INCS)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	mkdir -p $(DIR_OBJS)
	$(CC) $(CFLAGS) -I $(DIR_INCS) -c $< -o $@

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)

clean:
	rm -rf $(DIR_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:    all bonus clean fclean re
