/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_awesome_phonebook.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:49:24 by itan              #+#    #+#             */
/*   Updated: 2023/07/19 15:43:06 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

AwesomePhonebook::AwesomePhonebook()
{
	size = 0;
}

AwesomePhonebook::~AwesomePhonebook()
{
}

void AwesomePhonebook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::cout << "ADDING CONTACT!" << std::endl;
	std::cout << "First Name: ";
	std::cin >> first_name;
	std::cout << "Last Name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> phone_number;
	std::cout << "Darkest secrets: ";
	std::cin >> darkest_secret;
	if (std::cin.eof())
	{
		std::cout << "EXITING..." << std::endl;
		return ;
	}
	if (size == 8)
	{
		for (size_t i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[size - 1] = Contact(first_name, last_name, nickname,
			phone_number, darkest_secret);
	}
	else
		contacts[size] = Contact(first_name, last_name, nickname, phone_number,
			darkest_secret);
	if (size < 8)
		size++;
}

void AwesomePhonebook::search_contacts()
{
	std::cout << "SEARCHING!" << std::endl;
	std::cout << std::setw(10) << "index"
				<< "|";
	std::cout << std::setw(10) << "first name"
				<< "|";
	std::cout << std::setw(10) << "last name"
				<< "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		contacts[i].print_contact_short();
	}
	this->show_contact();
}

void AwesomePhonebook::show_contact()
{
	int	index;

	std::cout << "Enter index: ";
	std::cin >> index;
	if (std::cin.eof())
		return ;
	if (index < 0 || index >= size)
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	contacts[index].print_contact();
}
