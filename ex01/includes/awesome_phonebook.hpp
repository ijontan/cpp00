/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome_phonebook.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:48:15 by itan              #+#    #+#             */
/*   Updated: 2023/03/23 22:12:12 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_PHONEBOOK_HPP
#define AWESOME_PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <list>
#include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    ~Contact();
};

class AwesomePhonebook
{
private:
    std::list<Contact> *contacts;

public:
    AwesomePhonebook();
    ~AwesomePhonebook();
    void add_contact(Contact contact);
};

#endif