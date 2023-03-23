/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:44:09 by fprado            #+#    #+#             */
/*   Updated: 2023/01/24 16:44:21 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

void newContact(phoneBook *repertory)
{
    int tmp;
    if (repertory->nbContact >= 8)
        tmp = (repertory->nbContact%8);
    else
        tmp = repertory->nbContact;
    std::cout<<"tmp = " << tmp << std::endl;
    std::cout << "What is your first name ?" << std::endl;
    std::cin >> repertory->contacts[tmp].firstName;
    std::cout << "What is your last name ? " << std::endl;
    std::cin >> repertory->contacts[tmp].lastName;
    std::cout << "What is your Nickname ?" << std::endl;
    std::cin >> repertory->contacts[tmp].nickname;
    std::cout << "What is your phone number ?" << std::endl;
    std::cin >> repertory->contacts[tmp].phoneNumber;
    std::cout << "What is your darkest secret ?" << std::endl;
    std::cin >> repertory->contacts[tmp].darkestSecret;
    repertory->nbContact++;
}

int    ft_show(phoneBook *repertory, char *str)
{
    int valeur;
    if (std::sscanf(str, "%d", &valeur) != 1)
    {
        std::cout << "Error: You must enter an integer" << std::endl;
        return (0);
    }
    else if (valeur >= 0 && valeur <= repertory->nbContact)
    {
        std::cout << std::endl << "Contact number: " << valeur << std::endl << "First name: " << repertory->contacts[valeur].firstName << std::endl << "Last name: " << repertory->contacts[valeur].lastName << std::endl << "Nickname:" << repertory->contacts[valeur].nickname << std::endl << "Phone number: " << repertory->contacts[valeur].phoneNumber << std::endl << "Darkest secret: " << repertory->contacts[valeur].darkestSecret << std::endl << std::endl;
        return (1);
    }
    else
        return (0);
}

void searchContact(phoneBook    *repertory)
{
    size_t      index;
    std::string str;
    int         out;

    out = 0;

    if (repertory->nbContact > 8)
        index = 8;
    else
        index = repertory->nbContact;
    if (index == 0)
    {
        std::cout << "You have zero contact in your repertory, please add one" << std::endl << std::endl;
        std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        return ;
    }
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (size_t i = 0; i < index; i++)
    {
        std::cout << "|" << std::setw(10);
        std::cout << i;
        if (repertory->contacts[i].firstName.length() <= 10)
        {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].firstName;
        }
        else
            std::cout << "|" << repertory->contacts[i].firstName.erase(9, repertory->contacts[i].firstName.length()) << ".";
       if (repertory->contacts[i].lastName.length() <= 10)
       {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].lastName;
       }
        else
            std::cout << "|" << repertory->contacts[i].lastName.erase(9, repertory->contacts[i].lastName.length()) << ".";
        if (repertory->contacts[i].nickname.length() <= 10)
        {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].nickname << "|" << std::endl;
        }
        else
            std::cout << "|" << repertory->contacts[i].nickname.erase(9, repertory->contacts[i].nickname.length()) << ".|" << std::endl;
    }
    
    while (out == 0)
    {
        if (repertory->nbContact > 8)
            std::cout << "Please enter a valid index between " << 0 << " and " << 7 << std::endl;
        else
            std::cout << "Please enter a valid index between " << 0 << " and " << repertory->nbContact - 1 << std::endl;
        std::getline(std::cin, str);
        out = ft_show(repertory, (char *)str.c_str());
    }
    std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
    (void)repertory;
}