.PHONY:					all $(NAME) clear mkbuild clear clean fclean re sanitize

NAME					= array

BUILD_DIR				= build/

HEADER_DIR				= header/
HEADER_FILES			= Array.hpp
	
DIR						=	src/
SRC						=	main.cpp

OBJECTS					= $(SRC:%.cpp=$(BUILD_DIR)%.o)

GCC						= c++
CFLAGS					= -Wall -Werror -Wextra -std=c++98
SANITIZE				= $(CFLAGS) -g3 -fsanitize=address

RM 						= rm -rf
CLEAR					= clear

$(BUILD_DIR)%.o: 		$(DIR)%.cpp $(HEADER_DIR)* Makefile
						@mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I$(HEADER_DIR) -I/usr/include -c $< -o $@


all: 					clear mkbuild $(HEADER_DIR) $(NAME) 
						
mkbuild:
						@mkdir -p build

init:
						@mkdir -p $(HEADER_DIR)
						@mkdir -p $(DIR)
						@touch $(DIR)main.cpp

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
						@${RM} $(BUILD_DIR)

re:						fclean all
						$(MAKE) all