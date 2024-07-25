/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:01:50 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/20 16:49:35 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void)
{
	std::cout << "Wrong Default constructor called" << std::endl;
	return;
}

wrongAnimal::wrongAnimal(std::string type)
{
	std::cout << "wrongAnimal default constructor of type " << type << " is called"<< std::endl;
	this->_type = type;
	return;
}

wrongAnimal::wrongAnimal(wrongAnimal const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

wrongAnimal::~wrongAnimal(void)
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

wrongAnimal &wrongAnimal::operator=(wrongAnimal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = rhs._type;
	return  (*this);
}

std::string	wrongAnimal::getType(void) const
{
	return this->_type;
}

void	wrongAnimal::makeSound(void) const
{
	std::cout << "Some strange animals are making noises, again ..." << std::endl;
}
