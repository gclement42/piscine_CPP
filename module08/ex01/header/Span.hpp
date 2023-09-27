#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm> 

class Span
{
	private:
		std::vector<int> _vector;
		size_t			_pos;
	public:
		Span(size_t N);
		Span(Span &src);
		~Span(void);
		Span &operator=(Span &src);
		void addNumber(int n);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void display(void);
		size_t shortestSpan(void);
		size_t longestSpan(void);
		class SpanIsFull: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span is full");
				}
		};
		class NotEnoughNumbers: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Not enough numbers");
				}
		};
};

# endif
