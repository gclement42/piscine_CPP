#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 10
int main(int, char**)
{
    const Array<int> num(MAX_VAL);
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	Array<int> tmp = numbers;
	Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
		std::cout << "mirror[" << i << "] = " << mirror[i] << std::endl;
		std::cout << "tmp[" << i << "] = " << tmp[i] << std::endl;
		std::cout << "test[" << i << "] = " << test[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}