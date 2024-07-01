/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturo <arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:24 by arturo            #+#    #+#             */
/*   Updated: 2024/07/01 18:30:04 by arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected :
		std::string	type;
	public	:
		virtual void	makeSound()	const;
		std::string	getType() const;
	//ORTHODOX FORMAT
		Animal();
		Animal(std::string type);
		Animal(Animal const &original);
		Animal	&operator=(Animal const &original);
		virtual ~Animal();
};

#endif