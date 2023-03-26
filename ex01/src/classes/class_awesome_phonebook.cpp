/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_awesome_phonebook.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:49:24 by itan              #+#    #+#             */
/*   Updated: 2023/03/26 17:49:36 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

AwesomePhonebook::AwesomePhonebook()
{
    contacts = new std::list<Contact>();
}

AwesomePhonebook::~AwesomePhonebook()
{
    delete contacts;
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
    if (contacts->size() == 8)
        contacts->pop_front();
    contacts->push_back(Contact(first_name, last_name, nickname, phone_number, darkest_secret));
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
    std::list<Contact>::iterator it = contacts->begin();
    for (size_t i = 0; i < contacts->size(); i++)
    {
        std::cout << std::setw(10) << i
                  << "|";
        (*(it++)).print_contact_short();
    }
    this->show_contact();
}

void AwesomePhonebook::show_contact()
{
    std::list<Contact>::iterator it = contacts->begin();
    std::cout << "Enter index: ";
    int index;
    std::cin >> index;
    if (index < 0)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    for (int i = 0; i < index; i++)
        it++;
    if ((size_t)index >= contacts->size())
        std::cout << "Invalid index!" << std::endl;
    else
        (*it).print_contact();
}