#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::stack<int>	_stack;
		std::string			_rpn;
		int					_result;
	public:
		RPN(char *rpn);
		~RPN();
		RPN(const RPN &rpn);
		RPN &operator=(const RPN &rpn);
		void add(void);
		void sub(void);
		void mult(void);
		void div(void);
		void calc();
};

#endif