/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artclave <artclave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:12:27 by arturo            #+#    #+#             */
/*   Updated: 2024/07/29 18:38:41 by artclave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected :
		std::string	type;
	public	:
		void	makeSound()	const;
		std::string	getType() const;
	//ORTHODOX FORMAT
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &original);
		WrongAnimal	&operator=(const WrongAnimal &original);
		~virtual WrongAnimal();
};

#endif