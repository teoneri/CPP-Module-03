/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:55 by mneri             #+#    #+#             */
/*   Updated: 2023/10/19 13:21:12 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName()
{
	return name_;
}

void ClapTrap::setName(std::string name)
{
	name_ = name;
}

int ClapTrap::getEnergyPoint()
{
	return energyPoints_;
}

int ClapTrap::getHitPoint()
{
	return hitPoints_;
}

int ClapTrap::getAttDamage()
{
	return attDamage_;
}

void ClapTrap::setAttDamage(int num)
{
	attDamage_ = num;
}

void ClapTrap::setEnergyPoint(int num)
{
	energyPoints_ = num;
}

void ClapTrap::setHitPoint(int num)
{
	hitPoints_ = num;
}


ClapTrap::ClapTrap()
{
	hitPoints_ = 10;
	energyPoints_ = 10;
	attDamage_ = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	name_ = name;
	hitPoints_ = 10;
	energyPoints_ = 10;
	attDamage_ = 0;
	std::cout << "ClapTrap Named constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{	
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	if(this != &other)
	{
		this->name_ = other.getName();
		this->hitPoints_ = other.getHitPoint();
		this->energyPoints_ = other.getEnergyPoint();
		this->attDamage_ = other.getAttDamage();
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " <<
					this->getAttDamage() << " points of damage!" << std::endl;
	}
	else if(this->getHitPoint() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attack, he's dead" << std::endl;;
		return;
	}
	else if(this->getEnergyPoint() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't attack, he's out of stamina" << std::endl;	
	}
	this->energyPoints_--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " has been attacked taking " << amount << " of damage!"  << std::endl;
	this->hitPoints_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has repaired its self healing " << amount << " hitpoints!" << std::endl;
		this->hitPoints_ += amount;
		this->energyPoints_--;
	}
	else if(this->getHitPoint() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't repair, it's dead" << std::endl;;
		return;
	}
	else if(this->getEnergyPoint() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " can't repair, it's out of stamina" << std::endl;	
	}
}