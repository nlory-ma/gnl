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

/*void			ft_cmd(char *cmd)
{

}
*/

void		ft_add(char	*buf)
{
	contact contacts = new Contact;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "last name" << std::endl;
	std::cin >> Contact->last_name;

	std::cout << "nickname" << std::endl;
	std::cin >> Contact->nick_name;

	std::cout << "login" << std::endl;
	std::cin >> Contact->login;

	std::cout << "phone" << std::endl;
	std::cin >> Contact->phone;

	std::cout << "adress" << std::endl;
	std::cin >> Contact->adress;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;

	std::cout << "first name" << std::endl;
	std::cin >> Contact->first_name;
}
int			main (void)
{
	char		*buffer;
	//std::string *buf
	std::cin >> buffer;

	if (strcmp(buffer, "EXIT") == 0)
		return (0);
	//if (buf == "EXIT")
	else if (strcmp(buffer, "ADD") == 0)
		ft_add(buffer);
	else if (strcmp(buffer, "SEARCH") == 0)
		ft_search(buffer);
	else
	{
		std::cout <<"discarded" << std::endl;
		return (0);
	}

	return (0);
}
