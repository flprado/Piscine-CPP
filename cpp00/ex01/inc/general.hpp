/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:12:01 by fprado            #+#    #+#             */
/*   Updated: 2023/01/22 17:40:52 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "contact.hpp"
#include "phonebook.hpp"

void newContact(phoneBook *repertory);
void searchContact(phoneBook    *repertory);