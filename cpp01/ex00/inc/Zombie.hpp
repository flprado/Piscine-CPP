/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprado <fprado@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:34:28 by fprado            #+#    #+#             */
/*   Updated: 2023/01/26 16:50:55 by fprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;

    public: 
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
};
