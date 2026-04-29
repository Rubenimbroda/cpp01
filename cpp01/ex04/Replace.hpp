/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 19:41:10 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 22:50:34 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int parse(int ac, char **av);
int readFile(const std::string& filename, std::string& content);
std::string replaceAll(const std::string& content, const std::string& s1,
	const std::string& s2);

#endif