/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:15:26 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 14:14:40 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	std::cout << "ScavTrap named constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks with all it's might " << target << ", causing " <<
					this->getAttDamage() << " points of damage!" << std::endl;
	}
	else if(this->getHitPoint() <= 0)
	{
		std::cout << "ScavTrap can't attack, it's dead" << std::endl;;
		return;
	}
	else if(this->getEnergyPoint() <= 0)
	{
		std::cout << "ScavTrap can't attack, it's out of stamina" << std::endl;	
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}