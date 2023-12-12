/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:58:14 by gclement          #+#    #+#             */
/*   Updated: 2023/12/12 13:45:49 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <cstdlib>
# include <deque>
# include <algorithm>

template <typename T>
void    insertionSort(T &container);
template <typename T>
void    mergeSort(T &left, T &right, T &container);

template <typename T>
void   fillContainer(char *argv[], int size, T &container)
{
    int i = 1;
    while (i < size)
    {
        container.push_back(atoi(argv[i]));
        i++;
    }
}

template <typename T>
void    dividedContainer(T &container)
{
    T left(container.begin(), container.begin() + (container.size() / 2));
    T right(container.begin() + (container.size() / 2), container.end());

    if (left.size() > 64)
    {
        dividedContainer(left);
        dividedContainer(right);
    }
    insertionSort(left);
    insertionSort(right);
    mergeSort(left, right, container);
}

template <typename T>
void    insertionSort(T &container)
{
    for (size_t i = 1; i < container.size(); i++)
    {
        if (container[i - 1] > container[i])
        {
            int j = i - 1;
            int nb = container[i];
            while (j != 0 && nb < container[j])
                j--;
            container.erase(container.begin() + i);
            if (j == 0 && nb < container[j])
                container.insert(container.begin(), nb);
            else
                container.insert(container.begin() + j + 1, nb);   
        }
    }
}

template <typename T>
void    mergeSort(T &left, T &right, T &container)
{
    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

