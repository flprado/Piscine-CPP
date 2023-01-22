/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:44:09 by fprado            #+#    #+#             */
/*   Updated: 2023/01/22 00:37:56 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

void newContact(phoneBook *repertory)
{
    if (repertory->nbContact > 8)
    {
        std::cout << "a faire";
    }
    else
    {
        std::cout << "What is your first name ?" << std::endl;
        std::cin >> repertory->contacts[repertory->nbContact].firstName;
        std::cout << "What is your last name ? " << std::endl;
        std::cin >> repertory->contacts[repertory->nbContact].lastName;
        std::cout << "What is your Nickname ?" << std::endl;
        std::cin >> repertory->contacts[repertory->nbContact].nickname;
        std::cout << "What is your phone number ?" << std::endl;
        std::cin >> repertory->contacts[repertory->nbContact].phoneNumber;
        std::cout << "What is your darkest secret ?" << std::endl;
        std::cin >> repertory->contacts[repertory->nbContact].darkestSecret;
        repertory->nbContact++;
    }
}

void searchContact(phoneBook    *repertory)
{
    int     index;
    int     cmp;

    cmp = 0;
    index = 0;
    std::cout << "     index|";
    std::cout << "first name|";
    std::cout << " last name|";
    std::cout << "  nickname|" << std::endl;
    for (size_t i = 0; i < 40; i++)
    {
        if(i < 9)
            std::cout << " ";
        if (i == 9)
        {
            std::cout << index;
            index ++;
        }
            cmp = repertory->contacts[index].firstName.length;
            for (size_t j = 0; j < (10 - cmp); j++)
                std::cout << " ";
            std::cout << repertory->contacts[index].firstName;
            std::cout << "|";
    }
    
    (void)repertory;
}