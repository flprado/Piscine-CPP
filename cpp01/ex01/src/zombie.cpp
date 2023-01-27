/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:15 by fprado            #+#    #+#             */
/*   Updated: 2023/01/27 18:11:18 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Zombie.hpp"

void    randomChump(std::string name)
{
	Zombie *zombie = newZombie(name);
	zombie->announce();
    delete(zombie);
}

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
    zombie->giveName(name);
	return (zombie);
}

void    Zombie::giveName(std::string name)
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
    std::cout << this->name << " has been deleted" << std::endl;
	return ;
}

void    Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}