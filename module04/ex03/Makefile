.PHONY:					all $(NAME) clear mkbuild clear clean fclean re sanitize

NAME					= Materia

BUILD_DIR				= build/

HEADER_DIR				= header/
HEADER_FILES			= main.hpp MateriaSource.hpp AMateria.hpp Ice.hpp Cure.hpp Character.hpp
	
DIR						=	src/
SRC						=	main.cpp MateriaSource.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp

OBJECTS					= $(SRC:%.cpp=$(BUILD_DIR)%.o)

GCC						= c++
CFLAGS					= -Wall -Werror -Wextra -Wshadow -std=c++98
SANITIZE				= $(CFLAGS) -g3 -fsanitize=address

RM 						= rm -rf
CLEAR					= clear

$(BUILD_DIR)%.o: 		$(DIR)%.cpp $(HEADER_DIR)* Makefile
						@mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I$(HEADER_DIR) -I/usr/include -O3 -c $< -o $@


all: 					clear mkbuild $(HEADER_DIR) $(NAME) 
						
mkbuild:
						@mkdir -p build

init:
						@mkdir -p $(HEADER_DIR)
						@mkdir -p $(DIR)
						@touch $(DIR)main.cpp
						@touch $(HEADER_DIR)main.hpp
						@touch .gitignore
						@echo "build/" >> .gitignore

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