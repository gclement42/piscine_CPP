#include "Span.hpp"

Span::Span(size_t n): _pos(0)
{
	_vector.resize(n);
}

Span::~Span(void){}

Span::Span(Span &src)
{
	*this = src;
}

Span &Span::operator=(Span &src)
{
	if (this != &src)
	{
		std::copy(src._vector.begin(), src._vector.end(), _vector.begin());
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_pos >= _vector.size())
		throw Span::SpanIsFull();
	_vector.at(_pos) = n;
	_pos++;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it = _vector.begin() + _pos;
	if (std::distance(begin, end) + _pos > _vector.size())
		throw Span::SpanIsFull();
	_vector.erase(it, it + (end - begin));
	_vector.insert(it, begin, end);
}

void Span::display(void)
{
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

size_t Span::shortestSpan(void)
{
	std::vector<int>			copy(_vector.size());
	std::vector<int>::iterator	it;
	int							shortest;

	if (_pos < 2)
		throw Span::NotEnoughNumbers();
	std::copy(_vector.begin(), _vector.end(), copy.begin());
	std::sort(copy.begin(), copy.end());
	it = copy.end();
	it--;
	shortest = *it - *(it - 1);
	while (it != copy.begin())
	{
		if (*it - *(it - 1) < shortest)
			shortest = *it - *(it - 1);
		it--;
	}
	return (shortest);
}

size_t Span::longestSpan(void)
{
	if (_pos < 2)
		throw Span::NotEnoughNumbers();
	int min = *std::min_element(_vector.begin(), _vector.end());
	int max = *std::max_element(_vector.begin(), _vector.end());
	return (max - min);
}


