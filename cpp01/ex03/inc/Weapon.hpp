/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:14:04 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/28 16:19:01 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(void);
        Weapon(std::string type);
        std::string const &getType(void);
        void    setType(std::string type);
};