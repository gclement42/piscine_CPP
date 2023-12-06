/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:14:24 by gclement          #+#    #+#             */
/*   Updated: 2023/12/06 10:20:05 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: ./ex02 [list of int]" << std::endl;
        return (0);
    }
    
    std::list<int> list;
    std::vector<int> vector;
    
    fillContainer(argv, argc, list);
    fillContainer(argv, argc, vector);
    
}