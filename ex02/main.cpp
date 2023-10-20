/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 15:48:35 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap c("Destroyer of Galaxys v.2000");
	
	c.attack("new born baby");
	c.attack("new born baby");
	c.highFivesGuys();
	c.takeDamage(5);
	c.beRepaired(4);
	c.takeDamage(200);
	c.beRepaired(4);
	c.attack("new born baby");
}