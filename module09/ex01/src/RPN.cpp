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
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	_stack.push(x + y);
}

void RPN::sub(void)
{
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	_stack.push(y - x);
}

void RPN::mult(void)
{
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	_stack.push(x * y);
}

void RPN::div(void)
{
	int x = _stack.top();
	_stack.pop();
	int y = _stack.top();
	_stack.pop();
	if (x == 0 || y == 0)
	{
		std::cout << "Error: Division by zero" << std::endl;
		_stack.push(0);
	}
	else
		_stack.push(y / x);
}

void RPN::calc()
{
	std::stringstream ss(_rpn);

	std::string token;
	while (std::getline(ss, token, ' '))
	{
		if (isdigit(token[0])) {

			if (std::atoi(token.c_str()) > 9) {
				std::cout << "Error: Number greater than 10" << std::endl;
				return ;
			}
			_stack.push(std::atoi(token.c_str()));
		}
		else if (_stack.size() == 1) {
			std::cout << "invalid :(" << std::endl;
			return ;
		}
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
	}
	if (_stack.size() > 1)
		std::cout << "invalid :(" << std::endl;
	else {
		_result = _stack.top();
		std::cout << _result << std::endl;
	}
}

