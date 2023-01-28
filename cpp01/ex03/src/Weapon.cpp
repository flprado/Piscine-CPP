/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:19:04 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/28 16:19:51 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

std::string const &Weapon::getType(void)
{
    return this->type;
}

Weapon::Weapon(void)
{
    return ;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
    return ;
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return ;
}