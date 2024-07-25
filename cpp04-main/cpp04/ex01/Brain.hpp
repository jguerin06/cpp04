/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:49:39 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/25 12:35:21 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	
	public:
		Brain(void);
		Brain(Brain const &copy);
		Brain &operator=(Brain const &source);
		virtual ~Brain(void);
};

#endif