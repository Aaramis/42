## include the header

#####################
###   VARIABLES   ###
#####################

# SOURCES
SRCS_PATH	:=	./SOURCES/
FILES		:=

# INCLUDES
INCLUDES_PATH	:=	./INCLUDES/
LIBFT_PATH	:=	$(INCLUDES_PATH)libft

# OUTPUT
NAME_LIB	:=	libft.a
NAME		:=	push_swap

# COMPILATORS
LFGLAGS		:=	-I $(LIBFT_PATH)
IFLAGS		:=	-I $(INCLUDES_PATH) $(LGFLAGS)
CFLAGS		:=	-Wall -Werror -Wextra $(IFLAGS)
OPT		:=	-O3
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

#####################
###      BASH     ###
#####################


all:		$(NAME)

$(NAME):	$(OBJS)
		cd $(LIBFT_PATH) && $(MAKE)
		$(CC) $(CFLAGS) $(OPT) $(LIBFT_PATH)/$(NAME_LIB) $(OBJS) -o $(NAME)

.o:
		@echo $(PURPLE) "Compiling $< into $@" $(EOC)
		@$(CC) $(CFLAGS) $(OPT) -c $< -o $@ 

.c:
		@echo $(RED)  "Missing file $@" $(EOC)

#clean:
#		$(RM) $(OBJS)
#		cd $(LIBFT_PATH) && $(MAKE) clean
clean:
		$(RM) $(OBJS)
		cd $(LIBFT_PATH) && $(MAKE) clean

fclean:		clean
		@$(RM) $(NAME)
		@cd $(LIBFT_PATH) && $(MAKE) fclean

re:		fclean $(NAME)

.PHONY:		all clean fclean re
