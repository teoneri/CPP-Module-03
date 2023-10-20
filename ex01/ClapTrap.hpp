/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:58 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 14:08:47 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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