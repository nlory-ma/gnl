/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 22:37:54 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/01/08 22:37:55 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

Sample::Sample(void){

	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor is called" << std::endl;
	return ;
}