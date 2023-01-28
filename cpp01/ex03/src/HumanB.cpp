/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:32:59 by fprado            #+#    #+#             */
/*   Updated: 2023/01/28 16:18:00 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/HumanB.hpp"

HumanB::HumanB(void)
{
    return ;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    
    return ;
}

HumanB::~HumanB()
{
    return ;
}


void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl; 
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
    return ;
}