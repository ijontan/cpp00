/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_awesome_phonebook.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:49:24 by itan              #+#    #+#             */
/*   Updated: 2023/03/23 21:56:42 by itan             ###   ########.fr       */
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

void AwesomePhonebook::add_contact(Contact contact)
{
    if (contacts->size() == 8)
        contacts->pop_front();
    contacts->push_back(contact);
}
