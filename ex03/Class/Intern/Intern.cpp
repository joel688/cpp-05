/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:57:12 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/01 12:02:00 by joakoeni         ###   ########.fr       */
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
	}
	throw Intern::NoFormException();
}

const std::string Intern::NoFormException::msg() const throw()
{
	return ("The Form you asked doesn't exist");
}
// ----------Non_Members_Functions----------

