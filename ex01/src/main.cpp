/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:14:12 by itan              #+#    #+#             */
/*   Updated: 2023/07/18 17:47:43 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

int	main(void)
{
	AwesomePhonebook	phonebook;

	std::string command;
	std::cout << "Welcome to the Awesome Phonebook!" << std::endl;
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD - Add a new contact" << std::endl;
	std::cout << "SEARCH - Search for a contact" << std::endl;
	std::cout << "EXIT - Exit the program" << std::endl;
	while (true)
	{
		std::cout << ">  ";
		std::cin >> command;
		if (std::cin.eof())
		{
			std::cout << "EXITING..." << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			phonebook.add_contact();
		}
		else if (command == "SEARCH")
			phonebook.search_contacts();
		else if (command == "EXIT")
		{
			std::cout << "EXITING..." << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
