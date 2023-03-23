/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:14:12 by itan              #+#    #+#             */
/*   Updated: 2023/03/23 22:05:36 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

int main(void)
{
    AwesomePhonebook phonebook;
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
        if (command == "ADD")
        {
            std::cout << "Please enter the first name: ";
        }
        else if (command == "SEARCH")
        {
            std::cout << "SEARCH: ";
            /* code */
        }
        else if (command == "EXIT")
        {
            std::cout << "EXIT: ";
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}
