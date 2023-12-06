/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:58:14 by gclement          #+#    #+#             */
/*   Updated: 2023/12/06 10:24:57 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>


 
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