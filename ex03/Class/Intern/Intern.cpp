/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:57:12 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:04:44 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

// ----------Constructors----------

Intern::Intern()
{
	return;
}

Intern::Intern(const Intern &src)
{
	if (this != &src)
		*this = src;
	return;
}

// ----------Deconstructors----------

Intern::~Intern()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

Intern& Intern::operator=(const Intern& src)
{
	if (this != &src)
		*this = src;
	return (*this);
}
// ----------Members_Functions----------

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *formtab[LEVEL_COUNT] =
	{
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target),	
		new RobotomyRequestForm(target)
	};
	std::string levels[LEVEL_COUNT] =
	{
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
	};
	for (int i = 0; i < LEVEL_COUNT; i++)
	{
		if(levels[i] == name)
			return (std::cout << "Intern creates "<< levels[i] << std::endl, formtab[i]);
		else
			std::cout << "Form asked to Intern don't exist..." << std::endl;
	}
	return(NULL);
}

// ----------Non_Members_Functions----------

