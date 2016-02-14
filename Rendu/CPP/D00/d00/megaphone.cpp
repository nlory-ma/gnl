/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:29:13 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/01/05 15:29:18 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char		*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		main (int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		i = 0;
		while (av[i + 1])
		{
			std::cout << ft_toupper(av[i + 1]);
			i++;
		}
	  std::cout << std::endl;
	}
	return (0);
}
