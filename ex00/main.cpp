/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 17:06:23 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("Destroyer of Worlds v.1000");
	
	c.attack("new born baby");
	c.takeDamage(5);
	c.takeDamage(5);
	c.beRepaired(4);
	c.takeDamage(20);
	c.attack("new born baby");
}