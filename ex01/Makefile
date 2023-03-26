# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 20:55:16 by itan              #+#    #+#              #
#    Updated: 2023/03/26 16:27:18 by itan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= awesome_phonebook

# ** main src ** #
SRC_DIR	= src
OBJ_DIR	= obj

# this is for mirroring the out dir
OBJ_DIRS= $(subst $(SRC_DIR), $(OBJ_DIR), $(shell find $(SRC_DIR) -type d))

SRC		= $(shell find $(SRC_DIR) -name '*.cpp')
OBJ		= $(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.cpp=.o))

AR		= ar -rcs
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -f
INC		= $(addprefix -I , $(shell find includes -type d))

# this is for debugging
DNAME	= debug.out
DFLAGS	= -fsanitize=address -fdiagnostics-color=always -g3


# ** COLORS ** #
BLACK		= \x1B[30m
RED			= \x1B[31m
GREEN		= \x1B[32m
YELLOW		= \x1B[33m
BLUE		= \x1B[34m
MAGENTA		= \x1B[35m
CYAN		= \x1B[36m
WHITE		= \x1B[37m
B_BLACK		= \x1B[40m
B_RED		= \x1B[41m
B_GREEN		= \x1B[42m
B_YELLOW	= \x1B[43m
B_BLUE		= \x1B[44m
B_MAGENTA	= \x1B[45m
B_CYAN		= \x1B[46m
B_WHITE		= \x1B[47m
BRIGHT		= \x1B[1m
NORMAL		= \x1B[0m
BLINK		= \x1B[4m
REVERSE		= \x1B[5m
UNDERLINE	= \x1B[3m
	
all::	$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
				@mkdir -p $(OBJ_DIRS)
				@printf "$(YELLOW)$(BRIGHT)Generating %25s\t$(NORMAL)%.40s\r" "$(NAME) src objects..." $@
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME)::	$(OBJ) 
			@printf "\n$(MAGENTA)$(BRIGHT)Compiling $(NAME)...          \n"
			@$(CC) $(CFLAGS) $(OBJ) $(INC) -o $(NAME)
			@printf "$(GREEN)COMPLETE!!\n\n"

$(DNAME):	$(SRC)
			@printf "\n$(MAGENTA)$(BRIGHT)Compiling $(DNAME) for $(NAME)...          \n"
			@$(CC) $(CFLAGS) $(DFLAGS) $(INC) $(SRC) $(DSRC) -o $(DNAME)
			@printf "$(GREEN)COMPLETE!!\n\n"

debug:	$(DNAME)


bonus:	$(NAME) $(CHECKER_NAME)

clean:
		@printf "$(RED)$(BRIGHT)Removing $(NAME) objects...\n$(NORMAL)"
		@$(RM) -rf $(OBJ_DIR) $(CHECKER_OBJ_DIR)

fclean:	clean
		@printf "$(RED)$(BRIGHT)Deleting $(NAME) and $(DNAME) and $(CHECKER_NAME)...\n\n$(NORMAL)"
		@$(RM) $(NAME) $(CHECKER_NAME) $(DNAME)

re:			fclean all

.PHONY: all clean fclean re debug bonus norm

norm:
		@norminette $(SRC_DIR) includes/