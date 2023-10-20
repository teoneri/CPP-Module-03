/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:57:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/20 17:16:04 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap c( "Destroyer of universe v3000" );

    c.whoAmI();
    c.attack( "new born baby" );
    c.takeDamage( 10 );
    c.beRepaired( 10 );

    return 1;
}