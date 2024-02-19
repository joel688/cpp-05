/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:52:31 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/16 18:25:54 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

// ----------Constructors----------

Bureaucrat::Bureaucrat()
{
	this->name = "Bureaucrat";
	this->grade = 150;
	return;
}

Bureaucrat::Bureaucrat(std::string name)
{
	this->name = name;
	this->grade = 150;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
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

void	Bureaucrat::operator<<(const Bureaucrat)
{
	std::cout << this->name << ", bureaucrat grade " << this->grade << std::endl;
	return;
}

// ----------Members_Functions----------

void	Bureaucrat::IncreaseGrade(void)
{
	if(IsValidGrade(this->grade - 1))
		this->grade--;
	return;
}

void	Bureaucrat::DecreaseGrade(void)
{
	if(IsValidGrade(this->grade + 1))
		this->grade++;
	return;
}

bool	Bureaucrat::IsValidGrade(int grade) const
{
	if(grade < 1 || grade > 150)
		return 0;
	return 1;
}

void	Bureaucrat::GradeTooHighException(void)
{
	std::cout << "Grade too high!" << std::endl;
	return;
}

void	Bureaucrat::GradeTooLowException(void)
{
	std::cout << "Grade too low!" << std::endl;
	return;
}
