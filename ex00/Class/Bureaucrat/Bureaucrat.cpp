/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:52:31 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/14 16:56:52 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

// ----------Constructors----------

Bureaucrat::Bureaucrat()
{
	return;
}

// ----------Deconstructors----------

Bureaucrat::~Bureaucrat()
{
	return;
}

// ----------Setters----------

void	Bureaucrat::SetName(std::string name)
{
	this->name = name;
	return;
}

void	Bureaucrat::SetGrade(int grade)
{
	if(IsValidGrade(grade))
		this->grade = grade;
	return;
}

// ----------Getters----------

const std::string	Bureaucrat::getName(void) const
{
	return(this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return(this->grade);
}

// ----------Operators_Overloaders----------

// ----------Members_Functions----------

void	Bureaucrat::IncreaseGrade(void)
{
	if(IsValidGrade(this->grade + 1))
	this->grade++;
	return;
}

void	Bureaucrat::DecreaseGrade(void)
{
	if(IsValidGrade(this->grade - 1))
		this->grade--;
	return;
}
