/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:26:12 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 23:00:19 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    if (parse(ac, av) == 1)
        return 1;

    std::string content;
    if (readFile(av[1], content) == 1)
        return 1;

    std::string replaced = replaceAll(content, av[2], av[3]);
    std::string outputFileName = std::string(av[1]) + ".replace";
    std::ofstream out(outputFileName.c_str());

    if (!out.is_open())
    {
        std::cerr << "Error: could not create output file: " << outputFileName << std::endl;
        return 1;
    }
    out << replaced;
    if (!out)
    {
        std::cerr << "Error: could not write output file: " << outputFileName << std::endl;
        return 1;
    }
    return 0;
}