/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:48:19 by itan              #+#    #+#             */
/*   Updated: 2023/07/18 18:04:18 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::Contact(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact &Contact::operator=(const Contact &rhs)
{
	if (this != &rhs)
	{
		first_name = rhs.first_name;
		last_name = rhs.last_name;
		nickname = rhs.nickname;
		phone_number = rhs.phone_number;
		darkest_secret = rhs.darkest_secret;
	}
	return (*this);
}

Contact::~Contact()
{
}

Contact::Contact(const Contact &src)
{
	*this = src;
}

void Contact::print_contact_short()
{
	std::string f_name = first_name;
	std::string l_name = last_name;
	std::string n_name = nickname;
	if (f_name.length() > 10)
		f_name = f_name.substr(0, 7) + "...";
	std::cout << std::setw(10) << f_name << "|";
	if (l_name.length() > 10)
		l_name = l_name.substr(0, 7) + "...";
	std::cout << std::setw(10) << l_name << "|";
	if (n_name.length() > 10)
		n_name = n_name.substr(0, 7) + "...";
	std::cout << std::setw(10) << n_name << std::endl;
}

void Contact::print_contact()
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
