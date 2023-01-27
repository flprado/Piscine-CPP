/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:04 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 19:24:14 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const &Weapon::getType(void)
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return ;
}