.PHONY:					all $(NAME) clear mkbuild clear clean fclean re sanitize

NAME					= brainz

BUILD_DIR				= build/

HEADER_DIR				= header/
HEADER_FILES			= Zombie.hpp
	
DIR						=	src/
SRC						=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJECTS					= $(SRC:%.cpp=$(BUILD_DIR)%.o)

GCC						= c++
CFLAGS					= -Wall -Werror -Wextra -std=c++98
SANITIZE				= $(CFLAGS) -g3 -fsanitize=address

RM 						= rm -rf
CLEAR					= clear

$(BUILD_DIR)%.o: 		$(DIR)%.cpp $(HEADER_DIR)* Makefile
						@mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I$(HEADER_DIR) -I/usr/include -O3 -c $< -o $@


all: 					clear mkbuild $(HEADER_DIR) $(NAME) 
						
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