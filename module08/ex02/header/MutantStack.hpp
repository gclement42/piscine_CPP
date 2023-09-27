/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:32:27 by gclement          #+#    #+#             */
/*   Updated: 2023/09/27 12:53:56 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <deque>
# include <iterator>


template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	using std::stack<T, Container>::c;
	
	public :
		typedef typename Container::iterator iterator;
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &src)
		{
			std::stack<T, Container>::operator=(src);		
		};
		MutantStack &operator=(const MutantStack &src)
		{ 
			std::stack<T, Container>::operator=(src);
			return (*this); 
		};
		iterator begin(void){return (c.begin()); };
		iterator end(void){return (c.end()); };
};

//std::ostream &operator<<(std::ostream &out, MutantStack::iterator &src);
#endif