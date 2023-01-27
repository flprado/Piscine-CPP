/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:37:18 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 20:04:10 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
    
    return ;
}

HumanA::~HumanA()
{
    return ;
}


void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl; 
}