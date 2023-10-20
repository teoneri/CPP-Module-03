/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:24:50 by mneri             #+#    #+#             */
/*   Updated: 2023/10/19 13:31:05 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name),  ScavTrap(name),FragTrap(name)
{
	ClapTrap::setName(name + "_clap_name");
	this->name_ = name;
	FragTrap::setHitPoint(FragTrap::getAttDamage());
	ScavTrap::setEnergyPoint(ScavTrap::getEnergyPoint());
	FragTrap::setAttDamage(FragTrap::getAttDamage());
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;

}

void DiamondTrap::whoAmI()
{
	std::cout << "this is DiamondTrap " << name_ <<  " created from parent ClapTrap " << ClapTrap::getName() << std::endl;
}