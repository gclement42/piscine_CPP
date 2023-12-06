#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename L>
void iter(T *arr, L len, void (*f)(T const &arg))
{
	L i;

	i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T, typename L>
void iter(T *arr, L len, void (*f)(T &arg))
{
	L i;

	i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void test(T &arg)
{
	arg += 1;
}
#endif