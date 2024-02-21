/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:52:31 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/21 19:49:29 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

// ----------Constructors----------

Bureaucrat::Bureaucrat() : name("Undefined name")
{
	SetGrade(LOWEST);
	return;
}

Bureaucrat::Bureaucrat(std::string name) : name(name)
{
	SetGrade(LOWEST);
	return;
}

Bureaucrat::Bureaucrat(int grade) : name("Undefined name")
{
	if(IsValidGrade(grade))
		SetGrade(grade);
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if(IsValidGrade(grade))
		SetGrade(grade);
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
	return;
}
// ----------Deconstructors----------

Bureaucrat::~Bureaucrat()
{
	return;
}

// ----------Setters----------

void	Bureaucrat::SetGrade(int grade)
{
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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return o;
}

// ----------Members_Functions----------

void	Bureaucrat::IncreaseGrade(void)
{
	std::cout << "Increasing Grade" << std::endl;
	if(IsValidGrade(this->grade - 1))
		SetGrade(this->grade - 1);
	return;
}

void	Bureaucrat::DecreaseGrade(void)
{
	std::cout << "Decreasing Grade" << std::endl;
	if(IsValidGrade(this->grade + 1))
		SetGrade(this->grade + 1);
	return;
}

bool	Bureaucrat::IsValidGrade(int grade) const
{
	if(grade >= HIGHEST && grade <= LOWEST)
		return 1;
	else if (grade < HIGHEST)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > LOWEST)
		throw Bureaucrat::GradeTooLowException();
	return 0;
}

const std::string Bureaucrat::GradeTooHighException::msg() const throw()
{
	return ("Grade too high!");
}

const std::string Bureaucrat::GradeTooLowException::msg() const throw()
{
	return ("Grade too low!");
}

// ----------Non_Members_Functions----------
