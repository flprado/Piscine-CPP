/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:44:09 by fprado            #+#    #+#             */
/*   Updated: 2023/01/21 19:01:43 by fprado           ###   ########.fr       */
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
    
}