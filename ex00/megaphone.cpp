/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:15:35 by itan              #+#    #+#             */
/*   Updated: 2023/07/18 17:52:12 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, const char **argv)
{
	std::string str;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 0; i < argc - 1; i++)
		str += argv[i + 1];
	for (size_t i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
	return (0);
}