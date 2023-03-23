/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:12:01 by fprado            #+#    #+#             */
/*   Updated: 2023/01/24 15:27:16 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include "contact.hpp"
#include "phonebook.hpp"

int    ft_show(phoneBook *repertory, char *str);
void    newContact(phoneBook *repertory);
void    searchContact(phoneBook    *repertory);