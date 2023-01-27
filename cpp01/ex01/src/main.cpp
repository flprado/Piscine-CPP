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
    Zombie *horde = zombieHorde(6, "test");
    std::cout << std::endl;
    horde->announce();
    delete [] horde;
    return 0;
}