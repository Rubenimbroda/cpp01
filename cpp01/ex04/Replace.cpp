/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 22:40:11 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 22:50:34 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string replaceAll(const std::string& content, const std::string& s1,
    const std::string& s2)
{
    std::string result;
    std::string::size_type start = 0;
    std::string::size_type found;

    found = content.find(s1, start);
    while (found != std::string::npos)
    {
        result += content.substr(start, found - start);
        result += s2;
        start = found + s1.length();
        found = content.find(s1, start);
    }
    result += content.substr(start);
    return (result);
}