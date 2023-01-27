/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:27:49 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 19:42:40 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
        void attack(void);        
};