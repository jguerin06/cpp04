/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:02:10 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/20 16:15:11 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void) : wrongAnimal("wrongCat")
{
	std::cout << "wrongCat constructor called" << std::endl;
	return;
}

wrongCat::wrongCat(wrongCat const &copy) : wrongAnimal(copy)
{
	std::cout << "wrongCat copy constructor called" << std::endl;
	*this = copy;
	return;
}

wrongCat	&wrongCat::operator=(wrongCat const &rhs)
{
	std::cout << "wrongCat assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

wrongCat::~wrongCat(void)
{
	std::cout << "wrongCat destructor called" << std::endl;
	return;
}

void	wrongCat::makeSound(void) const
{
	std::cout << "son incoherent de chat se prenant pour Batman" << std::endl;
}
