#include "RPN.hpp"

/* ERROR dans le cas ou il y a pas d'operateur faut renvoye une erreur ma legueu*/
int main(int argc, char **argv)
{
	(void)argc;
	if (argc != 2) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (0);
	}
	RPN rpn(argv[1]);
	rpn.calc();
	return (0);
}