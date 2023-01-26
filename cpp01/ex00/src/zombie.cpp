/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:15 by fprado            #+#    #+#             */
/*   Updated: 2023/01/26 16:50:22 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void    randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void    Zombie::announce(void)
{
	std::cout << this->name <<"BraiiiiiiinnnzzzZ..." << std::endl;
}