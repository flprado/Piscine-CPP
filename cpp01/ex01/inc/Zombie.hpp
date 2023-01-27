/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:28 by fprado            #+#    #+#             */
/*   Updated: 2023/01/27 18:07:07 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;

    public: 
        Zombie(void);
        ~Zombie(void);
        void    giveName(std::string name);
        void announce(void);
};

Zombie *zombieHorde(int N, std::string name);
Zombie  *newZombie(std::string name);
void    randomChump(std::string name);


#endif