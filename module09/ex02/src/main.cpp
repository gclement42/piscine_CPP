/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:14:24 by gclement          #+#    #+#             */
/*   Updated: 2023/12/12 14:08:13 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
bool isSort(T &container)
{
    for (size_t i = 1; i < container.size(); i++)
    {
        if (container[i - 1] > container[i])
            return (false);
    }
    return (true);
}

template <typename T>
void checkIfSort(T &container)
{
    if (isSort(container))
        std::cout << "is sort" << std::endl;
    else
        std::cout << "isn't sort" << std::endl;  
}

template<typename T>
void displayContainer(T &container)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        std::cout << container[i] << " ";
        if (i == 10)
        {
            std::cout << "...";
            break ;
        }
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: ./ex02 [list of int]" << std::endl;
        return (0);
    }
    
    std::deque<int> deque;
    std::vector<int> vector;
    
    std::cout << "Before: ";
    for (int i = 1; i < argc; i++)
    {
        std::cout << argv[i] << " ";
        if (i > 10)
        {
            std::cout << "...";
            break ;
        }
    }
    std::cout << std::endl;
    clock_t     startDeque = clock();
    pMerge(argv, argc, deque);
    if (deque.size() == 0)
        return (0);
    clock_t     endDeque = clock();
    clock_t     startVector = clock();
    pMerge(argv, argc, vector);
    if (vector.size() == 0)
        return (0);
    clock_t     endVector = clock();
    double durationVector = (double)(endVector - startVector) / CLOCKS_PER_SEC;
    double durationDeque = (double)(endDeque - startDeque) / CLOCKS_PER_SEC;
    
    std::cout << "After: ";
    displayContainer(deque);
    std::cout << "Time to process a range of " << vector.size() << " elements with \033[1;32mstd::vector\033[0m : " << durationVector << " us.\n";
    std::cout << "Time to process a range of " << deque.size() << " elements with \033[1;36mstd::deque\033[0m :  " << durationDeque << " us.\n";
    std::cout << "vector "; 
    checkIfSort(vector);
    std::cout << "deque ";
    checkIfSort(deque);
}