/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:57:04 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 01:07:22 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif

