/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:48:39 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:19:21 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

// ----------Constructors----------

AForm::AForm() : _name("Undefined name"), _GradeToSignIt(LOWEST), _GradeToExecuteIt(LOWEST)
{
	_isItSigned = false;
	return;
}

AForm::AForm(std::string name, int gradetosignit, int gradetoexecuteit) : _name(name), _GradeToSignIt(gradetosignit), _GradeToExecuteIt(gradetoexecuteit)
{
	_isItSigned = false;
	return;
}

AForm::AForm(std::string name, int gradetosignit, int gradetoexecuteit, std::string target) : _name(name), _GradeToSignIt(gradetosignit), _GradeToExecuteIt(gradetoexecuteit), _target(target)
{
	_isItSigned = false;
	return;
}

AForm::AForm(int gradetosignit, int gradetoexecuteit) : _name("Undefined name"), _GradeToSignIt(gradetosignit), _GradeToExecuteIt(gradetoexecuteit)
{
	_isItSigned = false;
	return;
}

AForm::AForm(const AForm &src) : _name(src._name), _isItSigned(src._isItSigned), _GradeToSignIt(src._GradeToSignIt), _GradeToExecuteIt(src._GradeToExecuteIt), _target(src._target)
{
	return;
}

// ----------Deconstructors----------

AForm::~AForm()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

const std::string AForm::getName(void) const
{
	return(this->_name);
}

int AForm::getGradeToSignIt(void) const
{
	return(this->_GradeToSignIt);
}

int AForm::getGradeToExecuteIt(void) const
{
	return(this->_GradeToExecuteIt);
}

bool AForm::getIsItSigned(void) const
{
	return(this->_isItSigned);
}

const std::string	AForm::getTarget(void) const
{
	return(this->_target);
}
// ----------Operators_Overloaders----------

std::ostream & operator<<(std::ostream & o, AForm const &src)
{
	o << src.getName() << ", form is signed = " << src.getIsItSigned() << ", grade to be signed = " << src.getGradeToSignIt() << ", grade to be executed = " << src.getGradeToExecuteIt() <<std::endl;
	return o;
}

AForm& AForm::operator=(const AForm& src)
{
	this->_isItSigned = src._isItSigned;
	return *this;
}
// ----------Members_Functions----------

void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if(bureaucrat.getGrade() <= this->_GradeToSignIt)
	{
		this->_isItSigned = true;
		bureaucrat.signForm(bureaucrat, *this);
	}
	else
		throw AForm::GradeTooLowException();
	return;
}

const std::string AForm::GradeTooHighException::msg() const throw()
{
	return ("Grade too high.");
}

const std::string AForm::GradeTooLowException::msg() const throw()
{
	return ("Grade too low.");
}

const std::string AForm::NotSignedException::msg() const throw()
{
	return ("Form not signed.");
}

const std::string AForm::NotRobotomized::msg() const throw()
{
	return ("Robotomization failed.");
}

const std::string AForm::ShrubberyCreationForm::msg() const throw()
{
	return ("Cannot plant three here.");
}
// ----------Non_Members_Functions----------

