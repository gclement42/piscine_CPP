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
size_t binarySearch(T &container, const int nb) {
    size_t low = 0;
    size_t high = container.size();

    while (low < high) {
        size_t mid = low + (high - low) / 2;

        if (container[mid] < nb) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

template <typename T>
void   sortContainer(T &container, T &containerB);

template <typename T>
void   pMerge(char *argv[], int size, T &container)
{
    T containerB;

    for(int i = 2; i < size; i += 2) {
        if (atoi(argv[i]) < 0 || atoi(argv[i - 1]) < 0) {
            std::cerr << "Error: only positive numbers are allowed" << std::endl;
            return ;
        }
        if (atoi(argv[i]) > atoi(argv[i - 1])) {
            containerB.push_back(atoi(argv[i]));
            container.push_back(atoi(argv[i - 1]));
        }
        else {
            containerB.push_back(atoi(argv[i - 1]));
            container.push_back(atoi(argv[i]));
        }
    }
    if (size % 2 == 0) {
        containerB.push_back(atoi(argv[size - 1]));
    }
    sortContainer(container, containerB);
    for (size_t i = 0; i < containerB.size(); i++) {
        size_t index = binarySearch(container, containerB[i]);
        container.insert(container.begin() + index, containerB[i]);
    }
}

template <typename T>
void   sortContainer(T &container, T &containerB)
{
    for (size_t i = 1; i < container.size(); i++)
    {
        if (container[i - 1] > container[i])
        {
            int j = i - 1;
            int nb = container[i];
            int nbB = containerB[i];
            while (j != 0 && nb < container[j])
                j--;
            container.erase(container.begin() + i);
            containerB.erase(containerB.begin() + i);
            if (j == 0 && nb < container[j]) {
                container.insert(container.begin(), nb);
                containerB.insert(containerB.begin(), nbB);
            }
            else {
                container.insert(container.begin() + j + 1, nb);   
                containerB.insert(containerB.begin() + j + 1, nbB);
            }
        }
    }
}


