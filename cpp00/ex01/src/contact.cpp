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
    std::string input;
    int tmp;
    if (repertory->nbContact >= 8)
        tmp = (repertory->nbContact%8);
    else
        tmp = repertory->nbContact;
    std::cout << "What is your first name ?" << std::endl;
    while (input.length() < 1)
    {
        if (!(std::getline(std::cin, input)))
            return ;
    }
    repertory->contacts[tmp].setFirstname(input);
    input.erase();
    std::cout << "What is your last name ?" << std::endl;
    while (input.length() < 1)
    {
        if (!(std::getline(std::cin, input)))
            return ;
    }
    repertory->contacts[tmp].setLastName(input);
    input.erase();
    std::cout << "What is your Nickname ?" << std::endl;
    while (input.length() < 1)
    {
        if (!(std::getline(std::cin, input)))
            return ;
    }
    repertory->contacts[tmp].setNickname(input);
    input.erase();
    std::cout << "What is your phoneNumber?" << std::endl;
    while (input.length() < 1)
    {
        if (!(std::getline(std::cin, input)))
            return ;
    }
    repertory->contacts[tmp].setPhoneNumber(input);
    input.erase();
    std::cout << "What is your darkest secret?" << std::endl;
    while (input.length() < 1)
    {
        if (!(std::getline(std::cin, input)))
            return ;
    }
    repertory->contacts[tmp].setDarkestSecret(input);
    repertory->nbContact++;
    return ;
}

int    ft_show(phoneBook *repertory, char *str)
{
    int valeur;
    if (std::sscanf(str, "%d", &valeur) != 1)
    {
        std::cout << "Error: You must enter an integer" << std::endl;
        return (0);
    }
    else if (valeur >= 0 && valeur <= repertory->nbContact - 1)
    {
        std::cout << std::endl << "Contact number: " << valeur << std::endl << "First name: " << repertory->contacts[valeur].getFirstName() << std::endl << "Last name: " << repertory->contacts[valeur].getLastName() << std::endl << "Nickname:" << repertory->contacts[valeur].getNickname() << std::endl << "Phone number: " << repertory->contacts[valeur].getPhoneNumber() << std::endl << "Darkest secret: " << repertory->contacts[valeur].getDarkestSecret() << std::endl << std::endl;
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
        return ;
    }
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (size_t i = 0; i < index; i++)
    {
        std::cout << "|" << std::setw(10);
        std::cout << i;
        if (repertory->contacts[i].getFirstName().length() <= 10)
        {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].getFirstName();
        }
        else
            std::cout << "|" << repertory->contacts[i].getFirstName().erase(9, repertory->contacts[i].getFirstName().length()) << ".";
       if (repertory->contacts[i].getLastName().length() <= 10)
       {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].getLastName();
       }
        else
            std::cout << "|" << repertory->contacts[i].getLastName().erase(9, repertory->contacts[i].getLastName().length()) << ".";
        if (repertory->contacts[i].getNickname().length() <= 10)
        {
            std::cout << "|" << std::setw(10);
            std::cout << repertory->contacts[i].getNickname() << "|" << std::endl;
        }
        else
            std::cout << "|" << repertory->contacts[i].getNickname().erase(9, repertory->contacts[i].getNickname().length()) << ".|" << std::endl;
    }
    
    while (out == 0)
    {
        if (std::cin.eof())
        {
            return;
        }
        if (repertory->nbContact > 8)
            std::cout << "Please enter a valid index between " << 0 << " and " << 7 << std::endl;
        else
            std::cout << "Please enter a valid index between " << 0 << " and " << repertory->nbContact - 1 << std::endl;
        std::getline(std::cin, str);
        out = ft_show(repertory, (char *)str.c_str());
    }
    (void)repertory;
}

void contact::setFirstname(std::string name)
{
    this->firstName = name;
}

void contact::setLastName(std::string name)
{
    this->lastName = name;
}

void contact::setNickname(std::string name)
{
    this->nickname = name;
}

void contact::setPhoneNumber(std::string name)
{
    this->phoneNumber = name;
}

void contact::setDarkestSecret(std::string darkest)
{
    this->darkestSecret = darkest;
}

std::string contact::getFirstName(void)
{
    return (this->firstName);
}

std::string contact::getLastName(void)
{
    return (this->lastName);
}

std::string contact::getNickname(void)
{
    return (this->nickname);
}

std::string contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string contact::getDarkestSecret(void)
{
    return (this->darkestSecret);
}