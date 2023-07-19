/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome_phonebook.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:48:15 by itan              #+#    #+#             */
/*   Updated: 2023/07/18 18:04:23 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_PHONEBOOK_HPP
# define AWESOME_PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret);
	Contact(const Contact &src);
	Contact &operator=(const Contact &rhs);
	~Contact();
	void print_contact_short();
	void print_contact();
};

class AwesomePhonebook
{
  private:
	Contact contacts[8];
	int size;

  public:
	AwesomePhonebook();
	~AwesomePhonebook();
	void add_contact();
	void search_contacts();
	void show_contact();
};

#endif