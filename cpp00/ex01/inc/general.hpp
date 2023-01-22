/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianprado <florianprado@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:12:01 by fprado            #+#    #+#             */
/*   Updated: 2023/01/22 00:34:44 by florianprad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <string>
#include <iostream>
#include <cstdlib>
#include "contact.hpp"
#include "phonebook.hpp"

void newContact(phoneBook *repertory);
void searchContact(phoneBook    *repertory);