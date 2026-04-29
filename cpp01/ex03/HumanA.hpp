/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:57:14 by ruben             #+#    #+#             */
/*   Updated: 2026/03/25 01:07:21 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP 
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};

#endif