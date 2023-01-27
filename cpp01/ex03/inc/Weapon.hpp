/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:14:04 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 19:41:36 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        std::string const &getType(void);
        void    setType(std::string type);
};