/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:14:40 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"
#include "Class/AForm/AForm.hpp"
#include "Class/PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Class/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "Class/ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		PresidentialPardonForm r("Jaquie");
		PresidentialPardonForm p(r);
		
		std::cout << a;
		a.IncreaseGrade();
		p.beSigned(a);
		a.executeForm(p);
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::NotSignedException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch(AForm::NotRobotomized & e)
	{
		std::cerr << e.msg() << std::endl;
	}

	std::cout<<"--------------------------------------------------"<< std::endl;

	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		RobotomyRequestForm p("Gilles");
		std::cout << a;
		a.IncreaseGrade();
		p.beSigned(a);
		a.executeForm(p);
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::NotSignedException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch(AForm::NotRobotomized & e)
	{
		std::cerr << e.msg() << std::endl;
	}

	std::cout<<"--------------------------------------------------"<< std::endl;

	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		ShrubberyCreationForm p("Gilles");
		std::cout << a;
		a.IncreaseGrade();
		p.beSigned(a);
		a.executeForm(p);
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::NotSignedException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch(AForm::NotRobotomized & e)
	{
		std::cerr << e.msg() << std::endl;
	}

}

