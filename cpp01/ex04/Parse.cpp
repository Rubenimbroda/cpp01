/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:38:10 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 20:29:05 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int parse(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: number of arguments must be 4" << std::endl;
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string s1 = av[2];
    if (s1.empty())
    {
        std::cerr << "Error: s1 can't be empty" << std::endl;
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    return 0;
}