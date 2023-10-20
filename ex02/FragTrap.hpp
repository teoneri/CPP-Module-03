/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:13:17 by mneri             #+#    #+#             */
/*   Updated: 2023/10/16 15:40:08 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
		public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void attack(const std::string &target);
		void highFivesGuys();
};