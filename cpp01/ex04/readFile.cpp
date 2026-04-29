/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:41:06 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 20:58:26 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int readFile(const std::string& filename, std::string& content)
{
    std::ifstream in(filename.c_str());

    if (!in.is_open())
    {
        std::cerr << "Error: could not open input file" << std::endl;
        return 1;
    }
    std::ostringstream buffer;
    buffer << in.rdbuf();
    content = buffer.str();
    in.close();
    return 0;
}