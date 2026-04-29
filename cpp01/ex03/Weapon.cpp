/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:51:52 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 00:53:07 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{
}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(const std::string& newType)
{
	this->type = newType;
}

