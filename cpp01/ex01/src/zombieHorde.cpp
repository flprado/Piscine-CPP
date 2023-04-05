/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:42:29 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 18:23:14 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        horde[i].giveName(name);
        i++;
    }
    return (horde);
}