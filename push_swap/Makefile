## include the header

#####################
###   VARIABLES   ###
#####################

# SOURCES
SRCS_PATH	:=	./SOURCES/
FILES		:=	push_swap
CHECK_F		:=	checker

# INCLUDES
INCLUDES_PATH	:=	./INCLUDES/
LIBFT_PATH	:=	$(INCLUDES_PATH)libft

# OUTPUT
NAME_LIB	:=	libft.a
NAME		:=	push_swap
CHECKER		:=	checker
LIB_PATH	:=	$(LIBFT_PATH)/$(NAME_LIB)

# COMPILATORS
LFLAGS		:=	-I $(LIBFT_PATH)
IFLAGS		:=	-I $(INCLUDES_PATH) $(LFLAGS)
OPT		:=	-O3
CFLAGS		:=	-Wall -Werror -Wextra $(OPT) $(IFLAGS)
CC		:=	gcc
LEAKS		:=	fsanitize=address
RM		:=	rm -f
LINKER		:=	ar rcs

#####################
###     COLORS    ###
#####################

BLACK 		:= 	"\033[1;30m"
RED 		:= 	"\033[1;31m"
GREEN 		:= 	"\033[1;32m"
CYAN 		:= 	"\033[1;35m"
PURPLE 		:= 	"\033[1;36m"
WHITE 		:= 	"\033[1;37m"
EOC 		:=	"\033[0;0m"

#####################
###      AUTO     ###
#####################

SRCS		:=	$(addprefix $(SRCS_PATH),$(addsuffix .c,$(FILES)))
OBJS		:=	$(addprefix $(SRCS_PATH),$(addsuffix .o,$(FILES)))
SRCS_CHECK	:=	$(addprefix $(SRCS_PATH),$(addsuffix .c,$(CHECK_F)))
OBJS_CHECK	:=	$(addprefix $(SRCS_PATH),$(addsuffix .o,$(CHECK_F)))

#####################
###      BASH     ###
#####################


all:		$(NAME)

$(NAME):	$(OBJS)
		cd $(LIBFT_PATH) && $(MAKE)
		$(CC) $(CFLAGS) $(LIB_PATH) $(OBJS) -o $(NAME)

.o:
		@echo $(PURPLE) "Compiling $< into $@" $(EOC)
		@$(CC) $(CFLAGS) $(OPT) -c $< -o $@ 

.c:
		@echo $(RED)  "Missing file $@" $(EOC)

clean:
		$(RM) $(OBJS)
		cd $(LIBFT_PATH) && $(MAKE) clean

fclean:		clean
		@$(RM) $(NAME) $(CHECKER)
		@cd $(LIBFT_PATH) && $(MAKE) fclean

re:		fclean $(NAME)

bonus:		$(OBJS_CHECK)
		cd $(LIBFT_PATH) && $(MAKE)
		$(CC) $(CFLAGS) $(LIB_PATH) $(OBJS_CHECK) -o $(CHECKER)

.PHONY:		all clean fclean re bonus
