/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:01:24 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/20 16:03:40 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef wrongAnimal_HPP
# define wrongAnimal_HPP

#include <iostream>

class wrongAnimal
{
	protected:
		std::string _type;
	
	public:
		wrongAnimal(void);
		wrongAnimal(std::string type);
		wrongAnimal(wrongAnimal const &src);
		virtual ~wrongAnimal();

		wrongAnimal	&operator=(wrongAnimal const &rhs);

		std::string		getType(void) const;
		virtual	void	makeSound(void) const;
};

#endif
