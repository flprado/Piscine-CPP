/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:50:09 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 18:12:26 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Zombie.hpp"

int main(void)
{
    int i = 0;
    Zombie *horde = zombieHorde(6, "test");
    std::cout << std::endl;
    while (i < 6)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return 0;
}