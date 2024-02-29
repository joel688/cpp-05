/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/29 17:07:45 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"
#include "Class/AForm/AForm.hpp"
#include "Class/PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Class/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "Class/ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "Class/Intern/Intern.hpp"


//Tu dois secure si ya pas de makeForm si il return null bah le reste ne sexecute pas 







int main()
{
	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		Intern f;
		AForm* p = f.makeForm("PresidentialPardonForm", "Gilles");
		std::cout << a;
		a.IncreaseGrade();
		if(p)
		{
			p->beSigned(a);
			a.executeForm(*p);
		}
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

	std::cout << "-----------------------------------------------" << std::endl;

	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		Intern f;
		AForm* p = f.makeForm("presidential pardon", "Gilles");
		std::cout << a;
		a.IncreaseGrade();
		p->beSigned(a);
		a.executeForm(*p);
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

	std::cout << "-----------------------------------------------" << std::endl;

	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		Intern f;
		AForm* p = f.makeForm("shrubbery creation", "Gilles");
		std::cout << a;
		a.IncreaseGrade();
		p->beSigned(a);
		a.executeForm(*p);
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

	std::cout << "-----------------------------------------------" << std::endl;

	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		Intern f;
		AForm* p = f.makeForm("robotomy request", "Gilles");
		std::cout << a;
		a.IncreaseGrade();
		p->beSigned(a);
		a.executeForm(*p);
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

