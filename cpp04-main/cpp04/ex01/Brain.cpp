/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:49:28 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/25 12:46:08 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Brain	&Brain::operator=(Brain const &source)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
	return;
}