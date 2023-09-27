#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;
	public:
		Array(void);
		Array(size_t n);
		Array(Array &src);
		Array& operator=(Array &src);
		T& operator[](size_t index);
		size_t size(void) const;
};

template <typename T>
Array<T>::Array(void):_size(0)
{
	this->_array = new T[0];
}

template <typename T>
Array<T>::Array(size_t n):_size(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(Array &src)
{
	*this = src;
}

template <typename T>
Array<T>& Array<T>::operator=(Array &src)
{
	this->_array = new T[src._size];
	std::copy(src._array, src._array + src._size, this->_array);
	this->_size = src._size;
	return (*this);
}

template <typename T>
size_t Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= this->_size)
		throw std::exception();
	return (this->_array[index]);
}

#endif