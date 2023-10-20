/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 15:57:43 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap c("Destroyer of Solar Systems v.2000");
	
	c.attack("new born baby");
	c.takeDamage(5);
	c.beRepaired(4);
	c.takeDamage(209);
	c.beRepaired(4);
	c.guardGate();
	c.attack("new born baby");
}