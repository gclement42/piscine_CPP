#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>

RPN::RPN(char *rpn): _rpn(rpn){}

RPN::~RPN(){}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &src)
{
	_stack = src._stack;
	_rpn = src._rpn;
	return (*this);
}

void RPN::add(void)
{
	std::cout << "Add" << std::endl;
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	_stack.push(x + y);
}

void RPN::sub(void)
{
	std::cout << "sub" << std::endl;
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	_stack.push(y - x);
}

void RPN::mult(void)
{
	std::cout << "mult" << std::endl;
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	_stack.push(x * y);
}

void RPN::div(void)
{
	std::cout << "div" << std::endl;
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	_stack.push(y / x);
}

void RPN::calc()
{
	std::stringstream ss(_rpn);

	std::string token;
	std::cout << "RPN: " << _rpn << std::endl;
	while (std::getline(ss, token, ' '))
	{
		if (isdigit(token[0]))
			_stack.push(std::atoi(token.c_str()));
		else if (token[0] == '+')
			add();
		else if (token[0] == '-')
			sub();
		else if (token[0] == '*')
			mult();
		else if (token[0] == '/')
			div();
		else
		{
			std::cout << "Error: Invalid input" << std::endl;
			return ;
		}
		std::cout << "Stack: " << _stack.top() << std::endl;
		//std::cout << "stack size:" << _stack.size() << std::endl;
	}
	_result = _stack.top();
	std::cout << _result << std::endl;
}

