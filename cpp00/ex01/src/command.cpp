/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:44:09 by fprado            #+#    #+#             */
/*   Updated: 2023/01/22 18:02:31 by fprado           ###   ########.fr       */
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
    size_t     index;
    int     cmp;

    cmp = 0;
    index = repertory->nbContact;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (size_t i = 0; i < index; i++)
    {
        std::cout << "|" << std::setw(10);
        std::cout << i;
        std::cout << "|" << std::setw(10);
        std::cout << repertory->contacts[i].firstName;
        std::cout << "|" << std::setw(10);
        std::cout << repertory->contacts[i].lastName;
        std::cout << "|" << std::setw(10);
        std::cout << repertory->contacts[i].nickname << "|" << std::endl;
    }
    
    (void)repertory;
}