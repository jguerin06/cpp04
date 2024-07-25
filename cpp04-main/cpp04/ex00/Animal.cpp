/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:09:55 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/20 16:21:28 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal default constructor of type " << type << " is called"<< std::endl;
	this->_type = type;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_type = rhs._type;
	return  (*this);
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animals are making noises ..." << std::endl;
}
