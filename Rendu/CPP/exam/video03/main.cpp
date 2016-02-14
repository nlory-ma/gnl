/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 23:16:49 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/01/08 23:16:51 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

int				main(void){
	Sample		instance;

	instance.foo = 42;
	std::cout << "l'instance.foo vaut " << instance.foo << std::endl;

	instance.bar();

	return (0);
}