#include "../inc/harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;

    i = 0;
    typedef void (Harl::*functab)(void);
    functab tab[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error };

    std::string ls[4] = {"debug", "info", "warning", "error"};


    while (i < 4)
    {
        if (ls[i].compare(level) == 0)
        {
           ((this)->*tab[i])();
           return;
        }
        i++;
    }
    if (i >= 4)
        std::cout << "I don't know what do you want about "<< level << std::endl;
}