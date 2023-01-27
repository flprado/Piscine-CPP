/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:44:54 by fprado            #+#    #+#             */
/*   Updated: 2023/01/27 17:49:36 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc,char **argv)
{
    Zombie test3;
    (void)argc;
    (void)argv;
    randomChump("test");
    Zombie *test2 = newZombie("test2");
    test3.giveName("test3");
    test3.announce();
    test2->announce();
    delete(test2);
    return (0);
}