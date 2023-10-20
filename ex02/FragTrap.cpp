/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:09:09 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 16:21:05 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->setHitPoint(100);
	this->setAttDamage(30);
	this->setEnergyPoint(100);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitPoint(100);
	this->setAttDamage(30);
	this->setEnergyPoint(100);
	std::cout << "FragTrap named constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if(this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << this->getName() << ": \"Hey guys don't leave me hanging, HIGH FIVE!!!\"" << std::endl;
	}
	else if(this->getHitPoint() <= 0)
	{
		std::cout << "FragTrap can't high five, it's dead" << std::endl;
		return;
	}
	else if(this->getEnergyPoint() <= 0)
	{
		std::cout << "FragTrap can't high five, it's out of stamina" << std::endl;	
	}
}

void FragTrap::attack(const std::string &target)
{
	if(this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks with all it's might " << target << ", causing " <<
					this->getAttDamage() << " points of damage!" << std::endl;
	}
	else if(this->getHitPoint() <= 0)
	{
		std::cout << "FragTrap can't attack, it's dead" << std::endl;;
		return;
	}
	else if(this->getEnergyPoint() <= 0)
	{
		std::cout << "FragTrap can't attack, it's out of stamina" << std::endl;	
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}