/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:42:38 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/18 17:09:02 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

// ----------Constructors----------

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
	return;
}

// ----------Deconstructors----------

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

// ----------Members_Functions----------

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{ 
	srand(static_cast<unsigned>(time(NULL)));
	if(this->getIsItSigned() == 0)
		throw AForm::NotSignedException();
	if(executor.getGrade() > this->getGradeToExecuteIt())
		throw AForm::GradeTooLowException();
	else if((rand() % 2) == 1)
		std::cout << "KrrrrrrrrKrrrrrrKrrrrrr" << std::endl << "Informs that " << this->getTarget() << " has been robotomized." << std::endl;
	else
	{
		delete this;
		throw AForm::NotRobotomized();
	}
	return 1;
}

// ----------Non_Members_Functions----------


