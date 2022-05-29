# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 13:22:41 by agardett          #+#    #+#              #
#    Updated: 2022/05/20 14:36:46 by agardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################
##  VARIABLES  ##
#################

#	libft Makefile path
LIBFT 		= ./libft

#	Sources
SRCSDIR 	= ./SRCS/
FILE 		= ft_printf ft_printf_tools ft_printf_p

#	Objects

#	Includes
INDIR 		=  ./INCLUDES
INDIR_LIBFT 	=  $(LIBFT)

#	Output
NAME_LIB 		= libftprintf.a
NAME			= a.out

#	Compiler
CC 		= gcc
LINKER		= ar rc
RM 		= rm -f
IFLAGS		= -I $(INDIR) -I $(LIBFT)
LFLAGS		= -L $(LIBFT) -lft
CFLAGS 		= -Wall -Werror -Wextra $(IFLAGS)
ONAME		= test

#	Optimization
OPTIFAGS	= -O2 -funroll-loops

##############
##  COLORS  ##
##############

BLACK 	= "\033[1;30m"
RED 	= "\033[1;31m"
GREEN 	= "\033[1;32m"
CYAN 	= "\033[1;35m"
PURPLE 	= "\033[1;36m"
WHITE 	= "\033[1;37m"
EOC 	= "\033[0;0m"

############
##  AUTO  ##
############

SRCS 		= $(addprefix $(SRCSDIR),$(addsuffix .c,$(FILE)))
OBJS 		= $(addprefix $(SRCSDIR),$(addsuffix .o,$(FILE)))

all:		$(NAME)

$(NAME): 	$(NAME_LIB)
	#	$(CC) $(CFLAGS) $(OPTIFLAGS) $(NAME_LIB) -o $(NAME)

$(NAME_LIB):	$(OBJS)
		@cd $(LIBFT) && $(MAKE)
		@echo $(CYAN) " - Compiling $@" $(RED)
		@$(LINKER) $(NAME_LIB) $(OBJS) $(LIBFT)/*.o
		@ranlib $(NAME_LIB)
		@echo $(GREEN) " - OK" $(EOC)

.o:
		@echo $(PURPLE) " - Compiing $< into $@" $(EOC)
		@$(CC) $(CLFAGS) $(OPTIFLAGS) -c $< -o $@

.c:	
		@echo $(RED) "Missing file : $@" $(EOC)

clean:
		@$(RM) $(OBJS)
		@cd $(LIBFT) && $(MAKE) clean

fclean:		clean
		@$(RM) $(NAME) $(NAME_LIB)
		@cd $(LIBFT) && $(MAKE) fclean

re:		fclean $(NAME)

.PHONY:	all clean fclean re
