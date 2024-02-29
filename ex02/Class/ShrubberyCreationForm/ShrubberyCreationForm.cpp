/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:29:26 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:10:14 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

// ----------Constructors----------

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
	return;
}
// ----------Deconstructors----------

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

// ----------Setters----------

// ----------Getters----------

// ----------Operators_Overloaders----------

// ----------Members_Functions----------

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{ 
	if(this->getIsItSigned() == 0)
		throw AForm::NotSignedException();
	if(executor.getGrade() > this->getGradeToExecuteIt())
		throw AForm::GradeTooLowException();
	else
	{
		std::string tree =
		"    *\n"
        "   ***\n"
        "  *****\n"
        " *******\n"
        "*********\n"
        "   |||\n"
        "   |||\n";
		std::string filename = this->getTarget() + "_shrubbery.txt";
		std::ofstream file(filename.c_str());
		if(file.is_open())
		{
			file << tree;
			file.close();
		}
		else
			throw AForm::ShrubberyCreationForm();
	}

	return 1;
}

// ----------Non_Members_Functions----------


