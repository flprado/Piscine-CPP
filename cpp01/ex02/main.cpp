/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:35:22 by florianprad       #+#    #+#             */
/*   Updated: 2023/01/27 18:50:24 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Adress of str " << &str << std::endl;
    std::cout << "Adress of str using stringPTR: " << stringPTR << std::endl;
    std::cout << "Adress of str using stringREF: " << &stringREF << std::endl << std::endl;
    std::cout << "Value of str " << str << std::endl;
    std::cout << "Value pointed by stringPTR " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF " << stringREF << std::endl;
}