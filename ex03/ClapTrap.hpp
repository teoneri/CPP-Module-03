/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:58 by mneri             #+#    #+#             */
/*   Updated: 2023/10/19 13:14:56 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
	private:
		std::string name_;
		int hitPoints_;
		int energyPoints_;
		int attDamage_;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &other);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap &other);

		std::string getName();
		void setName(std::string name);
		int getHitPoint();
		void setHitPoint(int num);
		int getEnergyPoint();
		void setEnergyPoint(int num);
		int getAttDamage();
		void setAttDamage(int num);
		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif