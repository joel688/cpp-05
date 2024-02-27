/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:23:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/27 15:54:34 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

// ----------Constructors----------

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",25,5, target) 
{
	return;
}

// ----------Deconstructors----------

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

// ----------Members_Functions----------

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if(this->getIsItSigned() == 0)
	{
		throw AForm::NotSignedException();
	}
	if(executor.getGrade() > this->getGradeToExecuteIt())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		std::cout << "Informs that " << this->getTarget() << "has been pardoned by Zaphod Beeblebox" << std::endl;
	}
}

// ----------Non_Members_Functions----------

