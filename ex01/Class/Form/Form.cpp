/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:48:39 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/21 21:43:42 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

// ----------Constructors----------

Form::Form() : _name("Undefined name"), _GradeToSignIt(LOWEST), _GradeToExecuteIt(LOWEST)
{
	_isItSigned = false;
	return;
}

Form::Form(std::string name, int gradetosignit, int gradetoexecuteit) : _name(name), _GradeToSignIt(gradetosignit), _GradeToExecuteIt(gradetoexecuteit)
{
	_isItSigned = false;
	return;
}

Form::Form(int gradetosignit, int gradetoexecuteit) : _name("Undefined name"), _GradeToSignIt(gradetosignit), _GradeToExecuteIt(gradetoexecuteit)
{
	_isItSigned = false;
	return;
}

Form::Form(const Form &src) : _name(src._name), _isItSigned(src._isItSigned), _GradeToSignIt(src._GradeToSignIt), _GradeToExecuteIt(src._GradeToExecuteIt)
{
	return;
}

// ----------Deconstructors----------

Form::~Form()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

const std::string Form::getName(void) const
{
	return(this->_name);
}

int Form::getGradeToSignIt(void) const
{
	return(this->_GradeToSignIt);
}

int Form::getGradeToExecuteIt(void) const
{
	return(this->_GradeToExecuteIt);
}

bool Form::getIsItSigned(void) const
{
	return(this->_isItSigned);
}

// ----------Operators_Overloaders----------

std::ostream & operator<<(std::ostream & o, Form const &src)
{
	o << src.getName() << ", form is signed = " << src.getIsItSigned() << ", grade to be signed = " << src.getGradeToSignIt() << ", grade to be executed = " << src.getGradeToExecuteIt() <<std::endl;
	return o;
}

Form& Form::operator=(const Form& src)
{
	this->_isItSigned = src._isItSigned;
	return *this;
}
// ----------Members_Functions----------

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if(bureaucrat.getGrade() <= this->_GradeToSignIt)
		this->_isItSigned = true;
	else
		throw Form::GradeTooLowException();
	return;
}

const std::string Form::GradeTooHighException::msg() const throw()
{
	return ("Grade too high!");
}

const std::string Form::GradeTooLowException::msg() const throw()
{
	return ("Grade too low!");
}

// ----------Non_Members_Functions----------

