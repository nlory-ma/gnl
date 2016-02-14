/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 23:17:08 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/01/08 23:17:09 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.Class.hpp"

Sample::Sample(void){

	std::cout << "constructor is called" << std::endl;

	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor is called" << std::endl;

	return ;
}

void	Sample::bar(void){
	std::cout <<"Bar is called" << std::endl;
}