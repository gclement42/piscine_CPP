.PHONY:					all $(NAME) clear mkbuild clear clean fclean re sanitize

NAME					= Hi

BUILD_DIR				= build/
	
DIR						=	src/
SRC						=	main.cpp

OBJECTS					= $(SRC:%.cpp=$(BUILD_DIR)%.o)

GCC						= c++
CFLAGS					= -Wall -Werror -Wextra -std=c++98
SANITIZE				= $(CFLAGS) -g3 -fsanitize=address

RM 						= rm -rf
CLEAR					= clear

$(BUILD_DIR)%.o: 		$(DIR)%.cpp  Makefile
						@mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I -I/usr/include -O3 -c $< -o $@


all: 					clear mkbuild $(NAME) 
						
mkbuild:
						@mkdir -p build

clear:
						$(CLEAR)
						
$(NAME): 				$(OBJECTS)
						$(GCC) $(OBJECTS) -o $(NAME)

sanit :					$(OBJECTS) 
						$(GCC) $(SANITIZE) $(OBJECTS) -o $(NAME)
						
clean:					
						@${RM} $(OBJECTS)

fclean:					clean
						@${RM} ${NAME}

re:						fclean all
						$(MAKE) all