/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 21:52:18 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/01/08 21:52:19 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int				main(void)
{
	char		buff[500];

	while (1)
	{
	
		std::cout <<"Please enter your sentence" << std::endl;
		std::cin >>buff ;
		std::cout << "your sentence is "<< buff << std::endl;
	}

	return (0);
}