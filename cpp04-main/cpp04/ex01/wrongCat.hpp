/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:01:57 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/20 16:14:02 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef wrongCAT_HPP
# define wrongCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
	public:
		wrongCat(void);
		wrongCat(wrongCat const &copy);
		wrongCat &operator=(wrongCat const &rhs);
		~wrongCat(void);

		virtual void makeSound(void) const;
};

#endif
