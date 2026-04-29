/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 04:16:50 by ruben             #+#    #+#             */
/*   Updated: 2026/03/26 04:44:46 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout <<"[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    s_command commands[4] = {
        { "DEBUG", &Harl::debug },
        { "INFO", &Harl::info },
        { "WARNING", &Harl::warning },
        { "ERROR", &Harl::error }
    };
    for (int i = 0; i < 4; i++)
    {
        if (commands[i].command == level)
        {
            (this->*commands[i].func)();
            return ;
        }
    }
    std::cerr << "Error: " << level << " is a invalid complaint level" << std::endl;
}