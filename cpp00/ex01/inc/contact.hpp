/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:11:08 by fprado            #+#    #+#             */
/*   Updated: 2023/01/21 18:50:40 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

class contact
{

    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void setFirstname(std::string name);
        void setLastName(std::string name);
        void setNickname(std::string name);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkest);
};