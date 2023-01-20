/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:11:08 by fprado            #+#    #+#             */
/*   Updated: 2023/01/20 15:12:25 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

class contact
{
    public:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        int         *phoneNumber;
        std::string darkestSecret;
};