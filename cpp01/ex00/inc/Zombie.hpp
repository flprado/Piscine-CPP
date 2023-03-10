/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:28 by fprado            #+#    #+#             */
/*   Updated: 2023/01/27 17:33:47 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;

    public: 
        Zombie(void);
        void    giveName(std::string name);
        ~Zombie(void);
        void announce(void);
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

